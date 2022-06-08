#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
EVT_BUTTON(0, OnButtonClicked)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "CalQmalator", wxPoint(30, 30), wxSize(456, 840))
{
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	//text box
	txt = new wxTextCtrl(this, 50, "", wxPoint(0, 0), wxSize(440, 100)); txt->SetFont(font);

	//0-9
	btn = new wxButton(this, 0, "0", wxPoint(110, 600), wxSize(220, 100)); btn->SetFont(font);
	btn = new wxButton(this, 1, "1", wxPoint(0, 500),   wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 2, "2", wxPoint(110, 500), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 3, "3", wxPoint(220, 500), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 4, "4", wxPoint(0, 400),   wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 5, "5", wxPoint(110, 400), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 6, "6", wxPoint(220, 400), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 7, "7", wxPoint(0, 300),   wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 8, "8", wxPoint(110, 300), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 9, "9", wxPoint(220, 300), wxSize(110, 100)); btn->SetFont(font);

	//operators
	btn = new wxButton(this, 10, "=", wxPoint(0, 700),   wxSize(440, 100)); btn->SetFont(font);
	btn = new wxButton(this, 11, "+", wxPoint(330, 600), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 12, "-", wxPoint(330, 500), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 13, "*", wxPoint(330, 400), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 14, "/", wxPoint(330, 300), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 15, "%", wxPoint(330, 200), wxSize(110, 100)); btn->SetFont(font);
	
	//speical
	btn = new wxButton(this, 16, "CLEAR", wxPoint(0, 100),   wxSize(440, 100)); btn->SetFont(font);
	btn = new wxButton(this, 17,   "-/+", wxPoint(0, 600),   wxSize(110, 100)); btn->SetFont(font);

	//conversions
	btn = new wxButton(this, 18, "BIN", wxPoint(0, 200),   wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 19, "HEX", wxPoint(110, 200), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 20, "DEC", wxPoint(220, 200), wxSize(110, 100)); btn->SetFont(font);

	Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
}
Main::~Main()
{
	delete[]btn;
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
