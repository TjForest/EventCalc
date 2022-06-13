#include "ButtonFactory.h"
#
ButtonFactory::ButtonFactory(Main* frame1) {
	m_frame1 = frame1;
}
ButtonFactory::~ButtonFactory() {

}
wxButton* ButtonFactory::btn0() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 0, "0", wxPoint(110, 600), wxSize(220, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn1() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 1, "1", wxPoint(0, 500), wxSize(110, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn2() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 2, "2", wxPoint(110, 500), wxSize(110, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn3() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 3, "3", wxPoint(220, 500), wxSize(110, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn4() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 4, "4", wxPoint(0, 400), wxSize(110, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn5() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 5, "5", wxPoint(110, 400), wxSize(110, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn6() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 6, "6", wxPoint(220, 400), wxSize(110, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn7() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 7, "7", wxPoint(0, 300), wxSize(110, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn8() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 8, "8", wxPoint(110, 300), wxSize(110, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn9() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 9, "9", wxPoint(220, 300), wxSize(110, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn10() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 10, "=", wxPoint(0, 700), wxSize(440, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn11() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 11, "+", wxPoint(330, 600), wxSize(110, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn12() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 12, "-", wxPoint(330, 500), wxSize(110, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn13() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 13, "*", wxPoint(330, 400), wxSize(110, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn14() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 14, "/", wxPoint(330, 300), wxSize(110, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn15() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 15, "%", wxPoint(330, 200), wxSize(110, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn16() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 16, "CLEAR", wxPoint(0, 100), wxSize(440, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn17() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 17, "-/+", wxPoint(0, 600), wxSize(110, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn18() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 18, "BIN", wxPoint(0, 200), wxSize(110, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn19() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 19, "HEX", wxPoint(110, 200), wxSize(110, 100)); btn->SetFont(font);
	return btn;
}
wxButton* ButtonFactory::btn20() {
	wxFont font(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	btn = new wxButton(m_frame1, 20, "DEC", wxPoint(220, 200), wxSize(110, 100)); btn->SetFont(font);
	return btn;
}