//Kim Lien Chu
//COP2535.0M1
#include <iostream>
#include <string>
#include "ValidateInput.h"

using namespace std;

ValidateInput::ValidateInput()
{
	valInNum = -98;
	sentinel_99 = -99;
	errorMsgOut = " ";
	wrong_Choice = "wrong_Number";
}
/***************************
ValidateNum::errorMsg
validate each number :--- send console error msgs out
and error msg back to the program
*---if blank or not a number            --- not a number
---if -99 stop asking for more numbers   -- end input
*---if  greater than    0                -- good number
*--- if 0 or less than  0               --- error range number
**********************************/

string ValidateInput::valChoice(int inNum)
{

	cout << "\n\n  inNum  " << inNum << endl;

	if ((inNum == sentinel_99)|| (inNum ==6))  //sentinel
	{
		cout << "\n\n  You wanted to stop entering numbers.  Good bye    " << endl;

		exit(0);
	}
	else if ((inNum >0)&& (inNum<6))
	{
		errorMsgOut = "good_Num";
	}


	return errorMsgOut;


}
string ValidateInput::valItem(string itemName)
{
	if (itemName == "-99")  //sentinel
	{
		cout << "\n\n  You wanted to stop entering numbers.  Good bye    " << endl;

		//exit(0);
	}
	else 
	{
		cout << "\n\n You entered:  " << itemName << "." << endl;
		errorMsgOut = "good_Item";

	}
	return errorMsgOut;

}


