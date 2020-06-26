#include "Header.h"

/**********************************************************************
* AUTHOR		: Oscar Solis-Pacheco
* ASSIGNMENT #2 : Multi-Dimensional Array - Tic Tac Toe
* CLASS		    : CS1B
* SECTION	    : MTWTH: 5p - 7:20p
* Due Date		: 6/25/20
***********************************************************************/

/***********************************************************************
*
* Multi-Dimensional Array - Tic Tac Toe
*
* ----------------------------------------------------------------------
* This program will allow for a user to play tic tac toe. It will start
* by telling the user the instructions and then it will allow for them
* to exit, set the player names, play 2 players, or play against a
* computer
* ---------------------------------------------------------------------
* INPUT:
* Does not take any input in the main class. All input is handled through
* other functions.
*
* OUTPUT:
* Output is all run through other functions
*************************************************************************/

// Start of main
int main() {
	// Initializes the board
	char boardArray[][3] = { {}, {}, {} };
	// Initializes the option
	char option;
	// Initializes the name for playerX
	string playerX = "";
	// Initializes the name for playerO
	string playerO = "";
	// Displays the class header
	  DisplayHeader();
	// Outputs the instructions
	OutputInstruct();
	// Fills the board with ' '
	InitBoard(boardArray);
	// Gets the player's option
	option = MainMenu(option, playerX, playerO);
	// Ends the game if they want to exit
	if (option == 'a' || option == 'A') {
		system("pause");
		return 0;
	} else {
		// Starts the game if they want to play
		RunGame(boardArray, option, playerX, playerO);
	}
} // End of main

// Start of RunGame
void RunGame(char boardArray[][3], char option, string& playerX, string& playerO) {
	char token;
	char whoWon;
	int index = 0;
	int randomNum = rand() % 10 + 1;
	system("cls");
	if (randomNum % 2 == 0) {
		token = 'X';
	}
	else {
		token = 'O';
	}
	if (option == 'c' || option == 'C') {
		if (playerX == "" || playerO == "") {
			GetPlayers(playerX, playerO);
		}
		//InitBoard(boardArray);
		bool run = true;
		for (int i = 0; i < 16; i++) {
			DisplayBoard(boardArray);
			GetAndCheckInp(boardArray, token, playerX, playerO);
			index++;
			token = SwitchToken(token);
			if (CheckWin(boardArray) == 'X' || CheckWin(boardArray) == 'O') {
				whoWon = CheckWin(boardArray);
				i = 16;
			}
			system("cls");
		}
		CheckWin(boardArray);
		DisplayBoard(boardArray);
		OutputWinner(whoWon, playerX, playerO);
		system("pause");
	}
	else if (option == 'd' || option == 'D') {
		if (playerX == "" || playerO == "") {
			GetPlayers(playerX, playerO);
		}
		//InitBoard(boardArray);
		bool run = true;
		for (int i = 0; i < 16; i++) {
			DisplayBoard(boardArray);
			GetAndCheckInpComputer(boardArray, token, playerX, playerO);
			index++;
			token = SwitchToken(token);
			if (CheckWin(boardArray) == 'X' || CheckWin(boardArray) == 'O') {
				whoWon = CheckWin(boardArray);
				i = 16;
			}
			system("cls");
		}
		CheckWin(boardArray);
		DisplayBoard(boardArray);
		OutputWinner(whoWon, playerX, playerO);
		system("pause");
	}
} // End of RunGame