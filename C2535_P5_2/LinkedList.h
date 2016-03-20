//Kim Lien Chu
//COP2535.0M1
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <vector>
#include <iostream>
#include <string>

#include "LinkNode.h"
using namespace std;
class ListNode
{
public:
	ListNode(double v, ListNode *p)
	{
		value = v; next = p;
	}
private:
	int pos;
	double value;
	ListNode *next;
	friend class LinkedList;      // LinkedList has friend status	
};



class LinkedList
{
public:
	void add(double x);
	bool isMember(double x);
	LinkedList() { head = NULL; }
	void print();
	void rPrint(){ rPrint(head); }
	~LinkedList();
	void remove(double x);
	void reverse();
	int search(double x);

	void insert(string, int, int);
private:
	ListNode *head;
	static void rPrint(ListNode *pList);
	int pos;
};

#endif