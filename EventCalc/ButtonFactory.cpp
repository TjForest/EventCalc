#include "ButtonFactory.h"

ButtonFactory::ButtonFactory(Main* frame1) {
	m_frame1 = frame1;
}
ButtonFactory::~ButtonFactory() {

}

wxButton* ButtonFactory::ButtonMaker(wxWindow* window, int ID, wxString letter, wxPoint point, wxSize size)
{
	return new wxButton(window, ID, letter, point, size);
}