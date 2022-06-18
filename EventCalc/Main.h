#pragma once
#include "wx/wx.h"

class Main : public wxFrame
{
public:
	Main();
	~Main();

	int num1, num2;
	wxString _num1 = "";
	wxString _num2 = "";
	bool symbol = false;
	wxString sym = "";

public:
	wxButton *btn;
	wxTextCtrl *txt = nullptr;

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();

};

