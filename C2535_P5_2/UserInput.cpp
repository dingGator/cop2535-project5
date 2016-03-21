//Kim Lien Chu
//COP2535.0M1
#include <iostream>
#include <string>
#include <cctype>
#include "UserInput.h"

using namespace std;


UserInput::UserInput()
{
	itemName = " ";
	begin_Input = "begin_Input";
	choiceNum =0;
	errorCnt = 0;
}
/***************************
UserInput::userNumIn
read in number,
**********************************/
int UserInput::userEnterChoice(string statusMsg)
{
	if (statusMsg == begin_Input)
	{

		int choiceNum;
		cout << "\n        Please Enter a Choice                 " << endl;
		cout << "\n   1.  Insert item to begining of List        " << endl;
		cout << "\n   2.  Insert item to end of List             " << endl;
		cout << "\n   3.  Remove an item from the List by name   " << endl;
		cout << "\n   4.  Remove the first item on the List      " << endl;
		cout << "\n   5.  Remove the last item on the List       " << endl;
		cout << "\n   or -99      to end entry                   " << endl;

		cout << "\n      Please Enter Your Choice:   ";

		
		cin >> choiceNum;
	}
	while ((!cin)|| (errorCnt < 7)|| (choiceNum != -99))
	{
		cout << "\n\n  You  entered " << choiceNum;
		cout << " This is not a choice number.  " << endl;
		cout << "    Please enter a choice number Or enter -99 to end :  " << endl;
		errorCnt++;
		cin.clear();
		cin.ignore();
		cin >> choiceNum;

	}

	if (errorCnt == 6)
	{
		choiceNum = errorCnt;
	}
	
		return choiceNum;
	
}
void UserInput::processChoice()
{
		if (choiceNum == 1)
		{
			cout << "\n   1.  Insert item to begining of List        " << endl;
			
		}
		else if (choiceNum == 2)
		{
			cout << "\n   2.  Insert item to end of List             " << endl;

		}
		else if (choiceNum == 3)
		{
			cout << "\n   3.  Remove an item from the List by name   " << endl;
		}
		else if (choiceNum == 4)
		{
			cout << "\n   4.  Remove the first item on the List      " << endl;
		}
		else if (choiceNum == 5)
		{
			cout << "\n   5.  Remove the last item on the List       " << endl;

		}
}
string UserInput::userEnterItem(string)
{
	cout << "\n   Please enter an item name:  " << endl;
	getline(cin,itemName);
	while (!cin)
	{
		cout << "\n\n  You did not enter an item name.  " << endl;
		cout << "\n    Please enter an item name  " << endl;
		cout << "                 Or enter -99 to end :  " << endl;
		cin.clear();
		cin.ignore();
		getline(cin,itemName);

	}
	return itemName;
	
};
