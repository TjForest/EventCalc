#pragma once
#include <string>
#include <math.h>

class CalcProcessor
{
private:
	static CalcProcessor* _processor;
	int baseNumber;
	CalcProcessor() {}
public:
	static CalcProcessor* GetInstance() {
		if(_processor == nullptr)
		{
			_processor = new CalcProcessor();
		}
		return _processor;
	}

	CalcProcessor(CalcProcessor& other) = delete;
	void operator=(const CalcProcessor& other) = delete;

	void SetBaseNum(int num) {
		baseNumber = num;
	}

	std::string GetDecimal()
	{
		return std::to_string(baseNumber);
	}
	std::string GetBinary() {
		std::string result = "";
		int num = baseNumber;
		for (int i = 0; i < 32; i++)
		{
			if (num % 2 == 0)
			{
				result = "0" + result;
			}
			else
			{
				result = "1" + result;
			}
			num = num / 2;
		}
		return result;
	}
	std::string GetHexadecimal() {
		std::string NumsToAlpha = "";
		int holder = baseNumber;
		while (holder > 0)
		{
			int rem = holder % 16;
			if (rem < 10) {
				NumsToAlpha = std::to_string(rem) + NumsToAlpha;
			}
			else if (rem == 10)
			{
				NumsToAlpha = "A" + NumsToAlpha;
			}
			else if (rem == 11)
			{
				NumsToAlpha = "B" + NumsToAlpha;
			}
			else if (rem == 12)
			{
				NumsToAlpha = "C" + NumsToAlpha;
			}
			else if (rem == 13)
			{
				NumsToAlpha = "D" + NumsToAlpha;
			}
			else if (rem == 14)
			{
				NumsToAlpha = "E" + NumsToAlpha;
			}
			else if (rem == 15)
			{
				NumsToAlpha = "F" + NumsToAlpha;
			}
			holder = holder / 16;
		}
		NumsToAlpha = "0x" + NumsToAlpha;
		return NumsToAlpha;
	}

	// SIN COS TAN
	std::string DoSin()
	{
		//std::string result = "";
		//int num = sin(baseNumber);
		//result = std::to_string(num);
		//return result;

		return std::to_string(sin(baseNumber));
	}
	std::string DoCos()
	{
		return std::to_string(cos(baseNumber));
	}
	std::string DoTan()
	{
		return std::to_string(tan(baseNumber));
	}
};
CalcProcessor* CalcProcessor::_processor = nullptr;