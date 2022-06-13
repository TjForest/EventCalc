#pragma once
#include "wx/wx.h"
#include "Main.h";

class Calc : public wxApp
{
public:
	Calc();
	~Calc();

private:
	Main* m_frame1 = nullptr;

public:
	virtual bool OnInit();
};

