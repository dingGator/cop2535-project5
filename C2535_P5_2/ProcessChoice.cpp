//Kim Lien Chu
//COP2535.0M1
#include <iostream>
#include <string>
#include <cctype>
#include "ProcessChoice.h"

using namespace std;


ProcessChoice::ProcessChoice()
{
	itemName = " ";
	choiceNum = 0;
}
/***************************
**********************************/
void ProcessChoice::procChoice(int choiceNum, string itemName)
{
	if (choiceNum == 1)
	{
		cout << "\n   this item:  " << itemName << "will be inserted to begining of List " << endl;

	}
	else if (choiceNum == 2)
	{
		cout << "\n   this item:  " << itemName << "will be inserted to end of List " << endl;

	}
	else if (choiceNum == 3)
	{
		cout << "\n   this item:  " << itemName << "will be remove from List by name " << endl;

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
