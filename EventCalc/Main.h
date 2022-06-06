#pragma once
#include "wx/wx.h"

class Main : public wxFrame
{
public:
	Main();
	~Main();

public:
	wxButton *btn = nullptr;
	wxTextCtrl *txt = nullptr;

	//wxDECLARE_EVENT_TABLE();
};

