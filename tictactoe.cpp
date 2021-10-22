
#include <iostream>
#include <stdio.h>
using namespace std;
// matrix to store X and O
char matrix[9] = {'1','2','3','4','5','6','7','8','9'};
// To count number of turns played
int turns = 0;
// for indexing
int box = 0;
// to take values X and O
char value;
// function to check if player won
int checkwin(char x) {

	if (matrix[0] == matrix[1] && matrix[1] == matrix[2] ||
		matrix[3] == matrix[4] && matrix[4] == matrix[5] ||
		matrix[6] == matrix[7] && matrix[7] == matrix[8] ||
		matrix[0] == matrix[3] && matrix[3] == matrix[6] ||
		matrix[1] == matrix[4] && matrix[4] == matrix[7] ||
		matrix[2] == matrix[5] && matrix[5] == matrix[8] ||
		matrix[0] == matrix[4] && matrix[4] == matrix[8] ||
		matrix[2] == matrix[4] && matrix[4] == matrix[6]) {

		return 1;

	}

}
int main()
{

	while (turns < 10) {
		//Player 1 Turn
		if (turns % 2 == 0) {
			value = 'X';
			cout << "Player X: which square number (1-9)?";
			cin >> box;
			// Negative Input
			if (box < 0) {
				cout << "GAME ENDED BY USER!";
				return 0;
			}
			// Out of Index
			if (box < 1 || box > 9) {
				cout << "Invalid square selected, please try again." << "\n";
			}

			if (box >= 1 && box <= 9) {
				if (matrix[box - 1] == 'X' || matrix[box - 1] == 'O') {
					cout << "Square already chosen, please try again." << "\n";
				}

				if (matrix[box - 1] != 'X' && matrix[box - 1] != 'O') {
					matrix[box - 1] = 'X';
					turns++;
					// Check draw condition
					if (turns == 9) {
						cout << "DRAW" << "\n";
						return 0;
					}

					if (checkwin(value) == 1) {
						cout << "PLAYER X WINS!";
						return 0;
					}

				}
			}
		}//PLayer 2 Turn

		if (turns % 2 == 1) {
			value = 'O';
			cout << "Player O: which square number (1-9)?";
			cin >> box;
			if (box < 0) {
				cout << "GAME ENDED BY USER!";
				return 0;
			}
			// Negative Input
			if (box < 1 || box>9) {
				cout << "Invalid square selected, please try again." << "\n";
			}
			//Out of Index
			if (box >= 1 && box <= 9) {
				if (matrix[box - 1] == 'X' || matrix[box - 1] == 'O') {
					cout << "Square already chosen, please try again." << "\n";
				}

				if (matrix[box - 1] != 'X' && matrix[box - 1] != 'O') {
					matrix[box - 1] = 'O';
					turns++;
					//check draw condition
					if (turns == 9) {
						cout << "DRAW" << "\n";
						return 0;
					}

					if (checkwin(value) == 1) {
						cout << "PLAYER O WINS!";
						return 0;
					}

				}
			}
		}

	}


}