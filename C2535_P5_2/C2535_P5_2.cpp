// Chapter 17 - Assignment 8, Member Insertion by Position
// This program adds a list insert by position capability to the
// Linked List Class.
#include <iostream>
#include <string>
#include "DisplayRep.h"
#include "UserInput.h"
#include "ValidateInput.h"
#include "ProcessChoice.h"
//#include "LinkNode.h"
#include "LinkedList.h"

using namespace std;
/**********************************************
•	add inventory item at the end of the list
•	add inventory item at the beginning of the list
•	remove inventory item from the end of the list
•	remove inventory item from the beginning of the list
•	remove inventory item by name
•	display the list of inventory items
•	exit

********************************/

int main()

{

	UserInput userEnter;
	ValidateInput valInput;
	LinkedList list1;
	ProcessChoice proChoice;
	DisplayRep  displayList;
	string begin_Input = "begin_Input";
	string good_Num = "good_Num";

	string statusMsg;
	int choiceNum;
	string itemName;
	string good_Item = "good_Item";
	statusMsg = begin_Input;
	string continue_Entry = "continue_entry";

	// Explain program to user
	displayList.displayProgHeader();

	while ((statusMsg == begin_Input) || (statusMsg == continue_Entry))
	{

		/********************************************
		//			Allow the user to enter the number
		//of movies each student saw into the array.
		*******************************************/
		choiceNum = userEnter.userEnterChoice(statusMsg);
		
		/********************************************
		//	 Validate all input.
		*******************************************/
		statusMsg = valInput.valChoice(choiceNum);
		if (statusMsg == good_Num)
		{
			if ((choiceNum == 1) || (choiceNum == 2) || (choiceNum == 3))
			{
				cout << "\n\n    after valInput  " << endl;
				itemName = userEnter.userEnterItem();
				cout << "\n\n    after  enteritem  " << itemName << endl;

				statusMsg = valInput.valItem(itemName);
			}

		}


		cout << "\n\n    after valItem  " << good_Item << endl;
		if ((statusMsg == good_Item) && (choiceNum == 1))
		{
			cout << "\n\n    before insert  " << good_Item << endl;
			list1.insert(itemName, 0);
			cout << "\n\n    after insert  " << itemName << endl;


		}
		else if ((statusMsg == good_Item) && (choiceNum == 2))
		{
			cout << "\n\n  addToEndList   " << endl;
			//	list1.addToEndList(itemName);
		}
		else if ((statusMsg == good_Item) && (choiceNum == 3))//		

		{
			list1.remove(itemName);

		}
		else if ((statusMsg == good_Item) && (choiceNum == 4))
		{

			list1.removeBeginList();
		}
		else if ((statusMsg == good_Item) && (choiceNum == 5))
		{
			cout << "\n\n     removeEndList" << endl;
			//		list1.removeEndList();
		}
		statusMsg = continue_Entry;
	}
		cout << "\nCurrent list membership is: ";
		list1.rPrint();
	/*			n++;
				}
			}
		}
	}
	*/
	
	// Create empty list

	/*
		list1.insert(x);
		cout << "\nCurrent list membership is: ";
		list1.rPrint();
	*/
	/*************************************************
	display the average with one decimal place
	display the mode(the value that occurs most often).
	***********************************************/
	/*
	int main()
{
	// Explain program to user
	cout << "This program allows you to construct a list by specifying"
		" list members\n and their positions on the list.";

	// Create empty list
	LinkedList list1;

	// Demonstrate insert by position        
	for (int k = 1; k <= 5; k++)
	{
		cout << "\nEnter a number followed by a position: ";
		int x, pos;
		cin >> x >> pos;
		list1.insert(x, pos);
		cout << "\nCurrent list membership is: ";
		list1.rPrint();
	}

	return 0;
}*/
	displayList.displayRepHeader();
	//displayList.displayItemList(sizeArray,itemArray[]);
	//	disRep.displaySurMod(modNum);
	
	return 0;
}