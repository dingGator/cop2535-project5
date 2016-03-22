//Kim Lien Chu
//COP2535.0M1
#ifndef PROCESSCHOICE_H
#define PROCESSCHOICE_H

#include <iostream>
#include <cctype>
#include <string>
#include <cstdlib>
using namespace std;
/*************************************
**************************************/

class ProcessChoice
{
private:
	// variables 
	string itemName;
	int choiceNum;

public:

	ProcessChoice();  // constructor

	void procChoice(int, string);
	~ProcessChoice(){};
};
#endif