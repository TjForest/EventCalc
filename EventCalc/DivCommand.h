#pragma once
#include <string>
#include "ICommand.h"


class DivCommand : public ICommand
{
public:
	int _num1, _num2;

	void setnum1(int num)
	{
		_num1 = num;
	}
	void setnum2(int num)
	{
		_num2 = num;
	}

	wxString Execute()
	{
		std::string ans = DoDiv(_num1, _num2);
		return ans;
	}
	std::string DoDiv(int num1, int num2)
	{
		std::string div = std::to_string(_num1 / _num2);
		return div;
	}
}; 