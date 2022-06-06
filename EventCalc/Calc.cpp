#include "Calc.h"

wxIMPLEMENT_APP(Calc);

Calc::Calc()
{
}

Calc::~Calc()
{
}

bool Calc::OnInit()
{
	Frame = new Main();
	Frame->Show();

	return true;
}