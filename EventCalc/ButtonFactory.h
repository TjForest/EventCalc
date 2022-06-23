#pragma once
#include "wx/wx.h"
#include "Main.h"

class ButtonFactory
{
public:
	wxButton* btn = nullptr;
	Main* m_frame1 = nullptr;


	ButtonFactory(Main* m_frame1);
	~ButtonFactory();
	wxButton* ButtonMaker(wxWindow* window, int ID, wxString letter, wxPoint point, wxSize Size);
};

