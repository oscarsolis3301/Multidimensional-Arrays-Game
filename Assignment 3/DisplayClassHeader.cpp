#include <iostream>
using namespace std;

// Start of DisplayClassHeader
void DisplayHeader() {
	/***********************************************************************
	* CONSTANTS
	* ---------------------------------------------------------------------------
	* OUTPUT - USED FOR CLASS HEADING
	* ---------------------------------------------------------------------------
	* PROGRAMMER		: Oscar Solis-Pacheco
	* CLASS				: CS1B
	* SECTION			: MTWTH: 5:00p - 7:20p
	* ASSIGNMENT	    : 2
	* ASSIGNMENT_NAME	: Multi-Dimensional Array - Tic Tac Toe
	************************************************************************/
	const char PROGRAMMER[30] = "Oscar Solis-Pacheco"; // NAME
	const char CLASS[5] = "CS1B";					  // CLASS
	const char SECTION[25] = "MTWTH: 5:00p - 7:20p"; // TIME OF CLASS
	const int ASSIGNMENT_NUM = 2;							// LAB NUMBER
	const char ASSIGNMENT_NAME[50] = "Multi-Dimensional Array - Tic Tac Toe"; // NAME OF LAB

	cout << "************************************************";
	cout << "\n* PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n* CLASS \t: " << CLASS;
	cout << "\n* SECTION \t: " << SECTION;
	cout << "\n* LAB # " << ASSIGNMENT_NUM << "\t: " << ASSIGNMENT_NAME;
	cout << "\n************************************************\n\n";
} // End of DisplayClassHeader