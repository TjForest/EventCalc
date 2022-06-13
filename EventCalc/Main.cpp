#include "Main.h"
#include "ButtonFactory.h"
#include "Calc.h"

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
	int NumCalc = evt.GetId();
	wxString StrNum = "";
	StrNum << NumCalc;

	if (NumCalc >= 0 && NumCalc <= 9)
	{
		txt->AppendText(StrNum);
	}

	if (NumCalc == 10)
	{
		txt->AppendText("=");
	}


	if (NumCalc == 11)
	{
		txt->AppendText("+");
	}
	if (NumCalc == 12)
	{
		txt->AppendText("-");
	}
	if (NumCalc == 13)
	{
		txt->AppendText("*");
	}
	if (NumCalc == 14)
	{
		txt->AppendText("/");
	}
	if (NumCalc == 15)
	{
		txt->AppendText("%");
	}

	if (NumCalc == 16)
	{
		txt->Clear();
	}
}

//void Equals()
//{
//	if (Main::LastOP != 0)
//	{
//
//	}
//}
//
//void ADD()
//{
//	
//}
//
//void SUB()
//{
//
//}
//
//void MULT()
//{
//	
//}
//
//void DIV()
//{
//
//}
//
//void MOD()
//{
//	
//}
