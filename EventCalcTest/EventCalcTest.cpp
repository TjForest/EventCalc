#include "pch.h"
#include "CppUnitTest.h"
//#include "../EventCalc/CalcProcessor.h"
#include "../EventCalc/ICommand.h"
#include "../EventCalc/AddCommand.h"
#include "../EventCalc/SubCommand.h"
#include "../EventCalc/MultCommand.h"
#include "../EventCalc/DivCommand.h"
#include "../EventCalc/ButtonFactory.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace EventCalcTest
{
	TEST_CLASS(EventCalcTest)
	{
	public:
		TEST_METHOD(PositiveAddTest)
		{
			wxString ans;
			AddCommand* adder = new AddCommand();
			ans = adder->DoAddition(10, 8);
			Assert::AreEqual(ans, "18");
		}
		TEST_METHOD(NegativeAddTest)
		{
			wxString ans;
			AddCommand* adder = new AddCommand();
			ans = adder->DoAddition(96, 4);
			Assert::AreNotEqual(ans, "50");
		}
		TEST_METHOD(PositiveSubTest)
		{
			wxString ans;
			SubCommand* Subber = new SubCommand();
			ans = Subber->DoSub(12, 4);
			Assert::AreEqual(ans, "8");
		}
		TEST_METHOD(NegativeSubTest)
		{
			wxString ans;
			SubCommand* Subber = new SubCommand();
			ans = Subber->DoSub(10, 8);
			Assert::AreNotEqual(ans, "18");
		}
		TEST_METHOD(PositiveMultTest)
		{
			wxString ans;
			MultCommand* Multer = new MultCommand();
			ans = Multer->DoMult(10, 8);
			Assert::AreEqual(ans, "80");
		}
		TEST_METHOD(NegativeMultTest)
		{
			wxString ans;
			MultCommand* Multer = new MultCommand();
			ans = Multer->DoMult(15, 3);
			Assert::AreNotEqual(ans, "18");
		}
		TEST_METHOD(PositiveDivTest)
		{
			wxString ans;
			DivCommand* Diver = new DivCommand();
			ans = Diver->DoDiv(15, 5);
			Assert::AreEqual(ans, "3");
		}
		TEST_METHOD(NegativeDivTest)
		{
			wxString ans;
			DivCommand* Diver = new DivCommand();
			ans = Diver->DoDiv(12, 4);
			Assert::AreNotEqual(ans, "5");
		}
		TEST_METHOD(PositiveDivTest2)
		{
			wxString ans;
			DivCommand* Diver = new DivCommand();
			ans = Diver->DoDiv(55, 5);
			Assert::AreEqual(ans, "11");
		}
		TEST_METHOD(PositiveMultTest2)
		{
			wxString ans;
			MultCommand* Multer = new MultCommand();
			ans = Multer->DoMult(8, 8);
			Assert::AreEqual(ans, "64");
		}
		TEST_METHOD(btn0)
		{
			Main* frame = new Main();
			wxButton* btn = nullptr;
			ButtonFactory* factory = new ButtonFactory(frame);
			btn = factory->ButtonMaker(frame, 0, "0", wxPoint(10, 285), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 0);
		}
		TEST_METHOD(btn1)
		{		
			Main* frame = new Main();
			wxButton* btn = nullptr;
			ButtonFactory* factory = new ButtonFactory(frame);
			btn = factory->ButtonMaker(frame, 1, "1", wxPoint(10, 285), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 1);
		}
		TEST_METHOD(btn2)
		{
			Main* frame = new Main();
			wxButton* btn = nullptr;
			ButtonFactory* factory = new ButtonFactory(frame);
			btn = factory->ButtonMaker(frame, 2, "2", wxPoint(10, 285), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 2);
		}
		TEST_METHOD(btn3)
		{
			Main* frame = new Main();
			wxButton* btn = nullptr;
			ButtonFactory* factory = new ButtonFactory(frame);
			btn = factory->ButtonMaker(frame, 3, "3", wxPoint(10, 285), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 3);
		}
		TEST_METHOD(btn4)
		{
			Main* frame = new Main();
			wxButton* btn = nullptr;
			ButtonFactory* factory = new ButtonFactory(frame);
			btn = factory->ButtonMaker(frame, 4, "4", wxPoint(10, 285), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 4);
		}
		TEST_METHOD(btn5)
		{
			Main* frame = new Main();
			wxButton* btn = nullptr;
			ButtonFactory* factory = new ButtonFactory(frame);
			btn = factory->ButtonMaker(frame, 5, "5", wxPoint(10, 285), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 5);
		}
		TEST_METHOD(btn6)
		{
			Main* frame = new Main();
			wxButton* btn = nullptr;
			ButtonFactory* factory = new ButtonFactory(frame);
			btn = factory->ButtonMaker(frame, 6, "6", wxPoint(10, 285), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 6);
		}
		TEST_METHOD(btn7)
		{
			Main* frame = new Main();
			wxButton* btn = nullptr;
			ButtonFactory* factory = new ButtonFactory(frame);
			btn = factory->ButtonMaker(frame, 7, "7", wxPoint(10, 285), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 7);
		}
		TEST_METHOD(btn8)
		{
			Main* frame = new Main();
			wxButton* btn = nullptr;
			ButtonFactory* factory = new ButtonFactory(frame);
			btn = factory->ButtonMaker(frame, 8, "8", wxPoint(10, 285), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 8);
		}
		TEST_METHOD(btn9)
		{
			Main* frame = new Main();
			wxButton* btn = nullptr;
			ButtonFactory* factory = new ButtonFactory(frame);
			btn = factory->ButtonMaker(frame, 9, "9", wxPoint(10, 285), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 9);
		}
	};
}
