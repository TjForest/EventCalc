#include "Main.h"
#include "ButtonFactory.h"
#include "Calc.h"
#include "Calcprocessor.h"
#include "ICommand.h"
#include "AddCommand.h"
#include "SubCommand.h"
#include "MultCommand.h"
#include "DivCommand.h"
#include <vector>


wxBEGIN_EVENT_TABLE(Main, wxFrame)
EVT_BUTTON(0, OnButtonClicked)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "CalQmalator", wxPoint(30, 30), wxSize(456, 840))
{
	ButtonFactory Fact = ButtonFactory(this);

	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	//text box
	txt = new wxTextCtrl(this, 50, "", wxPoint(0, 0), wxSize(440, 100)); txt->SetFont(font);

	Fact.ButtonMaker(this, 0, "0", wxPoint(110, 600), wxSize(220, 100));
	Fact.ButtonMaker(this, 1, "1", wxPoint(0, 500), wxSize(110, 100));
	Fact.ButtonMaker(this, 2, "2", wxPoint(110, 500), wxSize(110, 100));
	Fact.ButtonMaker(this, 3, "3", wxPoint(220, 500), wxSize(110, 100));
	Fact.ButtonMaker(this, 4, "4", wxPoint(0, 400), wxSize(110, 100));
	Fact.ButtonMaker(this, 5, "5", wxPoint(110, 400), wxSize(110, 100));
	Fact.ButtonMaker(this, 6, "6", wxPoint(220, 400), wxSize(110, 100));
	Fact.ButtonMaker(this, 7, "7", wxPoint(0, 300), wxSize(110, 100));
	Fact.ButtonMaker(this, 8, "8", wxPoint(110, 300), wxSize(110, 100));
	Fact.ButtonMaker(this, 9, "9", wxPoint(220, 300), wxSize(110, 100));
	Fact.ButtonMaker(this, 10, "=", wxPoint(0, 700), wxSize(440, 100));
	Fact.ButtonMaker(this, 11, "+", wxPoint(330, 600), wxSize(110, 100));
	Fact.ButtonMaker(this, 12, "-", wxPoint(330, 500), wxSize(110, 100));
	Fact.ButtonMaker(this, 13, "*", wxPoint(330, 400), wxSize(110, 100));
	Fact.ButtonMaker(this, 14, "/", wxPoint(330, 300), wxSize(110, 100));
	Fact.ButtonMaker(this, 15, "%", wxPoint(330, 200), wxSize(110, 100));
	Fact.ButtonMaker(this, 16, "CLEAR", wxPoint(0, 100), wxSize(440, 100));
	Fact.ButtonMaker(this, 17, "-/+", wxPoint(0, 600), wxSize(110, 100));
	Fact.ButtonMaker(this, 18, "BIN", wxPoint(0, 200), wxSize(110, 100));
	Fact.ButtonMaker(this, 19, "HEX", wxPoint(110, 200), wxSize(110, 100));
	Fact.ButtonMaker(this, 20, "DEC", wxPoint(220, 200), wxSize(110, 100));

	Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
}
Main::~Main()
{
	//delete[]btn;
}

void Main::OnButtonClicked(wxCommandEvent& evt)
{
	std::vector<ICommand*> cmds;
	CalcProcessor* Proc = CalcProcessor::GetInstance();

	int NumCalc = evt.GetId();
	wxString StrNum = "";
	StrNum << NumCalc;

	//0-9
	if (NumCalc >= 0 && NumCalc <= 9)
	{
		txt->AppendText(StrNum);
		if (symbol == true)
		{
			if (num2 != 0)
			{
				_num2 = std::to_string(num2);
				_num2 += StrNum;
			}
			else
			{
				_num2 += StrNum;
			}
		}
	}

	//Equals
	if (NumCalc == 10)
	{
		symbol = false;
		if (sym == "+")
		{
		AddCommand* Adder = new AddCommand;

			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);

			Adder->setNum1(num1);
			Adder->setNum2(num2);

			cmds.push_back(Adder);

			txt->Clear();

			txt->AppendText(cmds[0]->Execute());
			//txt->AppendText(Proc->GetAddition(num1, num2));
			cmds.pop_back();
			delete Adder;
		}
		else if (sym == "-")
		{
		SubCommand* Subber = new SubCommand;
			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);

			Subber->setnum1(num1);
			Subber->setnum2(num2);

			cmds.push_back(Subber);

			txt->Clear();

			txt->AppendText(cmds[0]->Execute());
			//txt->AppendText(Proc->GetSubtraction(num1, num2));
			cmds.pop_back();
			delete Subber;
		}
		else if (sym == "/")
		{
		DivCommand* Diver = new DivCommand;
			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);

			Diver->setnum1(num1);
			Diver->setnum2(num2);

			cmds.push_back(Diver);

			txt->Clear();

			txt->AppendText(cmds[0]->Execute());
			//txt->AppendText(Proc->GetDivide(num1, num2));
			cmds.pop_back();
			delete Diver;
		}
		else if (sym == "*")
		{
		MultCommand* Multer = new MultCommand;
			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);

			Multer->setnum1(num1);
			Multer->setnum2(num2);

			cmds.push_back(Multer);

			txt->Clear();

			txt->AppendText(cmds[0]->Execute());
			//txt->AppendText(Proc->GetMultiply(num1, num2));
			cmds.pop_back();
			delete Multer;
		}
		_num2.Clear();
		_num1.Clear();
		num1 = 0;
		num2 = 0;
	}

	//ops
	if (NumCalc == 11)
	{
		_num1 = txt->GetValue();
		txt->AppendText("+");
		sym = "+";
		symbol = true;
	}
	if (NumCalc == 12)
	{
		_num1 = txt->GetValue();
		txt->AppendText("-");
		sym = "-";
		symbol = true;
	}
	if (NumCalc == 13)
	{
		_num1 = txt->GetValue();
		txt->AppendText("*");
		sym = "*";
		symbol = true;
	}
	if (NumCalc == 14)
	{
		_num1 = txt->GetValue();
		txt->AppendText("/");
		sym = "/";
		symbol = true;
	}
	if (NumCalc == 15)
	{
		txt->AppendText("%");
	}

	//Clear
	if (NumCalc == 16)
	{
		txt->Clear();
	}

	//Negate/Positate
	if (NumCalc == 17)
	{
		txt->Clear();
	}

	//Conversoins
	if (NumCalc == 18)
	{
		Proc->SetBaseNum(wxAtoi(txt->GetValue()));
		txt->Clear();
		txt->AppendText(Proc->GetBinary());
	}
	if (NumCalc == 19)
	{
		Proc->SetBaseNum(wxAtoi(txt->GetValue()));
		txt->Clear();
		txt->AppendText(Proc->GetHexadecimal());
	}
	if (NumCalc == 20)
	{
		Proc->SetBaseNum(wxAtoi(txt->GetValue()));
		txt->Clear();
		txt->AppendText(Proc->GetDecimal());
	}
}