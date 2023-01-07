//============================================================================
// Name        : lab8Question1.cpp
// Author      :Ahmed Sabzwari
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
//	ifstream ifs;
	char **seats;
	int rowSize;

	string input;
	int fileOrCons;
	int row;
	int col;
	cout << "please enter a 1 (console input) or 2 (file input): ";
	cin >> fileOrCons;
	if (fileOrCons == 1) {
		cout << "please enter how many rows: ";
		cin >> rowSize;
		seats = new char*[rowSize];
		for (int i = 0; i < rowSize; i++) {
			seats[i] = new char[4];

		}
		for (int i = 0; i < rowSize; i++) {
			for (int j = 0; j < 4; j++) {
				if (j == 0) {
					seats[i][j] = 'A';
				}
				if (j == 1) {
					seats[i][j] = 'B';
				}
				if (j == 2) {
					seats[i][j] = 'C';
				}
				if (j == 3) {
					seats[i][j] = 'D';
				}
			}
		}
		for (int i = 0; i < rowSize; i++) {
			for (int j = 0; j < 4; j++) {
				if (j == 0) {
					cout << i + 1;
				}
				cout << setw(2) << right << seats[i][j];
				if (j == 3) {
					cout << endl;
				}
			}
		}
		while (input != "x") {
			cout << "please enter a digit and a letter: ";
			cin >> input;
			row = input[0] - '1';
			col = input[1] - 'A';
			if (seats[row][col] == 'X') {

				cout << "seat is taken. try again." << endl;
			}
			seats[row][col] = 'X';
			for (int i = 0; i < rowSize; i++) {
				for (int j = 0; j < 4; j++) {
					if (j == 0) {
						cout << i + 1;
					}
					cout << setw(2) << right << seats[i][j];
					if (j == 3) {
						cout << endl;
					}
				}
			}
			input = "";
		}

	}
	if (fileOrCons == 2) {
		ifstream ifs;
		ifs.open("inputLab8.txt");

		if (ifs.fail()) {
			cout << "here" << endl;
			exit(1);
		}
		//cout << "please enter how many rows: ";
		ifs >> rowSize;
		seats = new char*[rowSize];
//		cout << "efvbrbgnbgn" << endl;

		for (int i = 0; i < rowSize; i++) {
			seats[i] = new char[4];

		}
		for (int i = 0; i < rowSize; i++) {
			for (int j = 0; j < 4; j++) {
				if (j == 0) {
					seats[i][j] = 'A';
				}
				if (j == 1) {
					seats[i][j] = 'B';
				}
				if (j == 2) {
					seats[i][j] = 'C';
				}
				if (j == 3) {
					seats[i][j] = 'D';
				}
			}
		}
		for (int i = 0; i < rowSize; i++) {
			for (int j = 0; j < 4; j++) {
				if (j == 0) {
					cout << i + 1;
				}
				cout << setw(2) << right << seats[i][j];
				if (j == 3) {
					cout << endl;
				}
			}
		}
		while (input != "x") {
			cout << "please enter a digit and a letter: ";
			ifs >> input;
			row = input[0] - '1';
			col = input[1] - 'A';
			if (seats[row][col] == 'X') {

				cout << "seat is taken. try again." << endl;
			}
			seats[row][col] = 'X';
			for (int i = 0; i < rowSize; i++) {
				for (int j = 0; j < 4; j++) {
					if (j == 0) {
						cout << i + 1;
					}
					cout << setw(2) << right << seats[i][j];
					if (j == 3) {
						cout << endl;
					}
				}
			}
			input = "";
		}

	}

	return 0;
}
//output
//please enter a 1 (console input) or 2 (file input): 2
//1 A B C D
//2 A B C D
//3 A B C D
//4 A B C D
//5 A B C D
//6 A B C D
//7 A B C D
//please enter a digit and a letter: 1 X B C D
//2 A B C D
//3 A B C D
//4 A B C D
//5 A B C D
//6 A B C D
//7 A B C D
//please enter a digit and a letter: 1 X B C D
//2 A B X D
//3 A B C D
//4 A B C D
//5 A B C D
//6 A B C D
//7 A B C D
//please enter a digit and a letter: 1 X B C D
//2 A B X D
//3 A B C X
//4 A B C D
//5 A B C D
//6 A B C D
//7 A B C D
//please enter a digit and a letter: 1 X B C D
//2 A B X D
//3 A B C X
//4 A X C D
//5 A B C D
//6 A B C D
//7 A B C D
//please enter a digit and a letter: 1 X B C D
//2 A B X D
//3 A B C X
//4 A X C D
//5 X B C D
//6 A B C D
//7 A B C D
//please enter a digit and a letter: seat is taken. try again.
//1 X B C D
//2 A B X D
//3 A B C X
//4 A X C D
//5 X B C D
//6 A B C D
//7 A B C D
//please enter a digit and a letter: 1 X B C D
//2 A B X X
//3 A B C X
//4 A X C D
//5 X B C D
//6 A B C D
//7 A B C D
//please enter a digit and a letter: 1 X B C D
//2 A B X X
//3 A B C X
//4 A X C D
//5 X B C D
//6 A B C D
//7 A X C D
