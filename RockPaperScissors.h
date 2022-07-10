#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <climits>
using namespace std;

int playerChoice;
char Restart;

//prints Main Menu + takes player input
int mainMenu() {
	cout << "======================================" << endl;
	cout << "   ROCK PAPER SCISSORS LIZARD SPOCK   " << endl;
	cout << "======================================" << endl;
	cout << " 1. ROCK " << endl;
	cout << " 2. PAPER " << endl;
	cout << " 3. SCISSORS " << endl;
	cout << " 4. LIZARD " << endl;
	cout << " 5. SPOCK " << endl;

	cin >> playerChoice;
	
	return 0;
}

//win/tied/lose logic
int winLogic() {
	
	srand((int)time(NULL));
	int computer = rand() % 3 + 1;

	while (cin.fail()) {
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "please enter a number 1-5." << endl;
		cin >> playerChoice;
	}

	//Player choses Rock
	if (playerChoice == 1 && computer == 1) {
		cout << " Computer chose ROCK\n ROCK vs ROCK = TIED!" << endl;
	}
	if (playerChoice == 1 && computer == 2) {
		cout << " Computer chose PAPER\n ROCK vs PAPER = YOU LOSE!" << endl;
	}
	if (playerChoice == 1 && computer == 3) {
		cout << " Computer chose SCISSORS\n ROCK vs SCISSORS = YOU WIN!" << endl;
	}
	if (playerChoice == 1 && computer == 4) {
		cout << " Computer chose LIZARD\n ROCK vs LIZARD = YOU WIN!" << endl;
	}
	if (playerChoice == 1 && computer == 5) {
		cout << " Computer chose SPOCK\n ROCK vs SPOCK = YOU LOSE!" << endl;
	}

	//Player choses Paper
	if (playerChoice == 2 && computer == 1) {
		cout << " Computer chose ROCK\n PAPER vs ROCK = YOU WIN!" << endl;
	}
	if (playerChoice == 2 && computer == 2) {
		cout << " Computer chose PAPER\n PAPER vs PAPER = TIED!" << endl;
	}
	if (playerChoice == 2 && computer == 3) {
		cout << " Computer chose SCISSORS\n PAPER vs SCISSORS = YOU LOSE!" << endl;
	}
	if (playerChoice == 2 && computer == 4) {
		cout << " Computer chose LIZARD\n PAPER vs LIZARD = YOU LOSE!" << endl;
	}
	if (playerChoice == 2 && computer == 5) {
		cout << " Computer chose SPOCK\n PAPER vs SPOCK = YOU WIN!" << endl;
	}

	//Player choses Scissors
	if (playerChoice == 3 && computer == 1) {
		cout << " Computer chose ROCK\n SCISSORS vs ROCK = YOU LOSE!" << endl;
	}
	if (playerChoice == 3 && computer == 2) {
		cout << " Computer chose PAPER\n SCISSORS vs PAPER = YOU WIN!" << endl;
	}
	if (playerChoice == 3 && computer == 3) {
		cout << " Computer chose SCISSORS\n SCISSORS vs SCISSORS = TIED!" << endl;
	}
	if (playerChoice == 3 && computer == 4) {
		cout << " Computer chose LIZARD\n SCISSORS vs LIZARD = YOU WIN!" << endl;
	}
	if (playerChoice == 3 && computer == 5) {
		cout << " Computer chose SPOCK\n SCISSORS vs SPOCK = YOU LOSE!" << endl;
	}

	//Player choses LIZARD
	if (playerChoice == 4 && computer == 1) {
		cout << " Computer chose ROCK\n LIZARD vs ROCK = YOU LOSE!" << endl;
	}
	if (playerChoice == 4 && computer == 2) {
		cout << " Computer chose PAPER\n LIZARD vs PAPER = YOU WIN!" << endl;
	}
	if (playerChoice == 4 && computer == 3) {
		cout << " Computer chose SCISSORS\n LIZARD vs SCISSORS = YOU LOSE!" << endl;
	}
	if (playerChoice == 4 && computer == 4) {
		cout << " Computer chose LIZARD\n LIZARD vs LIZARD = TIED!" << endl;
	}
	if (playerChoice == 4 && computer == 5) {
		cout << " Computer chose SPOCK\n LIZARD vs SPOCK = YOU WIN!" << endl;
	}

	//Player choses SPOCK
	if (playerChoice == 5 && computer == 1) {
		cout << " Computer chose ROCK\n SPOCK vs ROCK = YOU WIN!" << endl;
	}
	if (playerChoice == 5 && computer == 2) {
		cout << " Computer chose PAPER\n SPOCK vs PAPER = YOU LOSE!" << endl;
	}
	if (playerChoice == 5 && computer == 3) {
		cout << " Computer chose SCISSORS\n SPOCK vs SCISSORS = YOU WIN!" << endl;
	}
	if (playerChoice == 5 && computer == 4) {
		cout << " Computer chose LIZARD\n SPOCK vs LIZARD = YOU LOSE!" << endl;
	}
	if (playerChoice == 5 && computer == 5) {
		cout << " Computer chose SPOCK\n SPOCK vs SPOCK = TIED!" << endl;
	}

	//Invalid input logic
	if (playerChoice <= 0 || playerChoice >= 6) {
		cout << "\n Invalid answer...\n Try again!" << endl;
		cin >> playerChoice;
		winLogic();
	}
	return 0;
}

//restart function
int restart() {
	cout << "\n Press 'R' to RESTART or 'Q' to QUIT" << endl;
	cin >> Restart;

	if (Restart == 'r' || Restart == 'R') {
		mainMenu();
		winLogic();
		restart();
	}
	if (Restart == 'q' || Restart == 'Q') {
		return 0;
	}
	if (Restart != 'r' || Restart != 'R' || Restart != 'q' || Restart != 'Q') {
		cout << "\n Choose correct input please!" << endl;
		restart();
	}
	return 0;
}