#include "Main.h"

//wxBEGIN_EVENT_TABLE(Main, wxFrame)
//EVT_BUTTON(0, OnButtonClicked)
//wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "CalQmalator", wxPoint(30, 30), wxSize(456, 840))
{
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	
	//text box
	txt = new wxTextCtrl(this, 50, "", wxPoint(0, 0), wxSize(440, 100)); txt->SetFont(font);

	//0-9
	btn = new wxButton(this, 0, "0", wxPoint(110, 600), wxSize(220, 100)); btn->SetFont(font);
	btn = new wxButton(this, 1, "1", wxPoint(0, 500), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 2, "2", wxPoint(110, 500), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 3, "3", wxPoint(220, 500), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 4, "4", wxPoint(0, 400), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 5, "5", wxPoint(110, 400), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 6, "6", wxPoint(220, 400), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 7, "7", wxPoint(0, 300), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 8, "8", wxPoint(110, 300), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 9, "9", wxPoint(220, 300), wxSize(110, 100)); btn->SetFont(font);

	//operators
	btn = new wxButton(this, 10, "=", wxPoint(0, 700), wxSize(440, 100)); btn->SetFont(font);
	btn = new wxButton(this, 11, "+", wxPoint(330, 600), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 12, "-", wxPoint(330, 500), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 13, "*", wxPoint(330, 400), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 14, "/", wxPoint(330, 300), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 15, "C", wxPoint(0, 100), wxSize(440, 100)); btn->SetFont(font);
	btn = new wxButton(this, 16, "-/+", wxPoint(0, 600), wxSize(110, 100)); btn->SetFont(font);

	//conversions
	btn = new wxButton(this, 17, "mod", wxPoint(330, 200), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 18, "bin", wxPoint(0, 200), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 19, "hex", wxPoint(110, 200), wxSize(110, 100)); btn->SetFont(font);
	btn = new wxButton(this, 20, "dec", wxPoint(220, 200), wxSize(110, 100)); btn->SetFont(font);
}
Main::~Main()
{
	delete[]btn;
}

//void Main::OnButtonClicked(wxCommandEvent& evt)
//{
//
//}