//Kim Lien Chu
//COP2551.0M1
#include <iostream>
#include <iomanip>
#include <string>

#include "DisplayRep.h"

using namespace std;


/*******************************
display header
******************************/

void DisplayRep::displayHeader()
{	//display

	cout << "\n\n     ***************************************************" << endl;
	cout << "\n                    The List of Items you entered "         ;
	cout << "\n              Please note:  ** the items should be in the order you wanted   ";
	cout << "\n     ****************************************************" << endl;

}
/*************************************
display average number of movies watched
************************************/

void DisplayRep::displayItemList(int sizeofArray,string arrayItem[])
{
	//display
	
	for (int i = 0; i < sizeofArray; i++)
	{
		cout << "\n        item # " << (i + 1) << "  is:  " << endl;
	}
	
}
/****************************************
display mode of the survey
**************************************/



