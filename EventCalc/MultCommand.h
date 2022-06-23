#pragma once
#include <string>
#include "ICommand.h"

class MultCommand : public ICommand
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
		std::string ans = DoMult(_num1, _num2);
		return ans;
	}
	std::string DoMult(int num1, int num2)
	{
		std::string multi = std::to_string(num1 * num2);
		return multi;
	}
}; 
