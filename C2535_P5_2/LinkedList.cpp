//Kim Lien Chu
//COP2535.0M1
#include <iostream>
#include <string>
#include "LinkedList.h"
//#include "LinkNode.h"

using namespace std;
//**********************************************************
//              LinkedList::insert                         *
//  Insert a given value at a specified position.          *
//**********************************************************
void LinkedList::insert(string x, int pos)
{
	// Cases where the new value goes at the beginning
	// or when the list is empty are handled separately
	if (pos == 0 || head == NULL)
	{
		head = new ListNode(x, head);
		return;
	}

	// Figure out how many nodes to skip before splicing
	// in a new node

	ListNode *p = head;                  // p is used to walk down the list
	int numberToSkip = 1;
	while (numberToSkip <= pos)
	{
		if (p->next == NULL || numberToSkip == pos)
		{
			p->next = new ListNode(x, p->next);
			return;
		}
		// Not at end and have not skipped enough
		// So skip another one
		p = p->next;
		numberToSkip++;
	}
}

//*************************************************************
//               LinkedList::search                           *            
// Searches the linked list for a given value and returns     *
// its position in the list if found. Otherwise, it           *
// returns -1.                                                *
//*************************************************************
int LinkedList::search(string x)
{
	int position = 0;
	ListNode *p = head;   // Used to search through nodes
	while (p)
	{
		if (p->value == x) return position;
		p = p->next;
		position++;
	}
	return -1;            // Not found
}

//********************************************************************
//                     LinkedList::reverse                           *
// Rearranges the elements of the list to put them in reverse order. *
//********************************************************************
void LinkedList::reverse()
{
	ListNode *rev = NULL; // Holds list being reversed
	ListNode *p = head;   // Traverses nodes of original list
	ListNode *mover;      // Used to move noded from original list to the new list

	while (p)
	{
		// Move node at p to the beginning of the new list rev being constructed
		mover = p;
		p = p->next;
		mover->next = rev;
		rev = mover;
	}
	head = rev;
}

//***********************************
//        Destructor                *
//***********************************
LinkedList::~LinkedList()
{
	ListNode *p = head;
	ListNode *q;  // Next pointer
	while (p != NULL)
	{
		q = p->next;
		delete p;
		p = q;
	}
}

//************************************************************
//              LinkedList::remove                           *
// Removes a value passes as parameter from the linked list. *
//************************************************************
void LinkedList::remove(string x)
{
	ListNode *garbage;             // Use to delete nodes
	if (head == NULL) return;

	// Is x in the head?
	if (head->value == x)
	{
		garbage = head;
		head = head->next;
		return;
	}

	// x not in the head, find it
	ListNode *p = head;
	while (p->next != NULL && p->next->value != x)
	{
		p = p->next;
	}
	
	// p->next == NULL or p->next->value is x
	if (p->next == NULL){ return; }
	// Did not find it
	else
	{
		// Delete the x
		garbage = p->next;
		p->next = garbage->next;
		delete garbage;
	}
}

//******************************************************
//            Recursive print function                 *
//  Prints all elements on a list passed as parameter. *
//******************************************************
void LinkedList::rPrint(ListNode *pList)
{
	if (pList == NULL) return;
	else
	{
		cout <<"           " <<pList->value << "   ";
		rPrint(pList->next);
	}
}

//***********************************
//     LinkedList::print            *
// Prints all elements on the list. *
//***********************************
void LinkedList::print()
{
	ListNode *p = head;             // Use to walk down list
	while (p != NULL)
	{
		cout << p->value << " ";
		p = p->next;
	}
}

//**********************************
//     LinkedList::add             *
// Adds a given value to the list. *
//**********************************
void LinkedList::add(string x)
{
	head = new ListNode(x, head);
}

//***********************************************************
//            LinkedList::isMember                          *
// Checks to see if a given value is a member of the list.  *
//***********************************************************
bool LinkedList::isMember(string x)
{
	ListNode *p = head;              // Use p to walk through list
	while (p != NULL)
	{
		if (p->value == x) return true;
		else
			p = p->next;
	}
	// List is exhausted without finding x
	return false;
}
/*****************************************************
LinkedList::addToEndList
Add a value to the end of list
********************************************/
void LinkedList::addToEndList(string x)
{
	if (head == NULL)
	{
		head = new ListNode(x);
	}
	else
	{
		ListNode *nodePtr = head;
		while (nodePtr->next != NULL)
		{
			nodePtr = nodePtr->next;
		}
			nodePtr->next = new ListNode(x);
	}
}
//************************************************************
//              LinkedList::remove                           *
// Removes a value passes as parameter from the linked list. *
//************************************************************
void LinkedList::removeBeginList()
{
	ListNode *garbage;             // Use to delete nodes
	if (head == NULL) return;

	// Is x in the head?
		garbage = head;
		head = head->next;
		return;
	

}
void LinkedList::removeEndList()
{
	ListNode *garbage;             // Use to delete nodes
	if (head == NULL) return;

	ListNode *lastitemPtr=head;
	ListNode *prevPtr=head;
	// Is x in the head?
	// x not in the head, find it
	while (lastitemPtr->next != NULL)
	{
		prevPtr = lastitemPtr;
		lastitemPtr = lastitemPtr->next;
	}
	prevPtr->next = NULL;
	delete lastitemPtr;
	lastitemPtr = NULL;
}


