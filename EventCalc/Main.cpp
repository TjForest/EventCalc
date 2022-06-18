#include "Main.h"
#include "ButtonFactory.h"
#include "Calc.h"
#include "Calcprocessor.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
EVT_BUTTON(0, OnButtonClicked)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "CalQmalator", wxPoint(30, 30), wxSize(456, 840))
{
	
	ButtonFactory Fact = ButtonFactory(this);

	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	//text box
	txt = new wxTextCtrl(this, 50, "", wxPoint(0, 0), wxSize(440, 100)); txt->SetFont(font);

	Fact.btn0();
	Fact.btn1();
	Fact.btn2();
	Fact.btn3();
	Fact.btn4();
	Fact.btn5();
	Fact.btn6();
	Fact.btn7();
	Fact.btn8();
	Fact.btn9();
	Fact.btn10();
	Fact.btn11();
	Fact.btn12();
	Fact.btn13();
	Fact.btn14();
	Fact.btn15();
	Fact.btn16();
	Fact.btn17(); 
	Fact.btn18();
	Fact.btn19();
	Fact.btn20();

	Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
}
Main::~Main()
{
	//delete[]btn;
}

void Main::OnButtonClicked(wxCommandEvent& evt)
{
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
			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);
			txt->Clear();
			txt->AppendText(Proc->GetAddition(num1, num2));
		}
		else if (sym == "-")
		{
			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);
			txt->Clear();
			txt->AppendText(Proc->GetSubtraction(num1, num2));
		}
		else if (sym == "/")
		{
			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);
			txt->Clear();
			txt->AppendText(Proc->GetDivide(num1, num2));
		}
		else if (sym == "*")
		{
			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);
			txt->Clear();
			txt->AppendText(Proc->GetMultiply(num1, num2));
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