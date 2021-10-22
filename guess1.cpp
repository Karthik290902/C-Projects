
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int original;
	int i = 500; 
	int min = 0;
	int max = 1001;
	int value[2] = { min,max };
	

	cout << "Enter a number between 1 to 1000";
	cin >> original;

	if (original >= 1 && original <= 1000) {
		while (max-min!=1) {
			cout << "Is the number you are thinking of less than "<<i<<"?\n" ;
			if (original < i) {
				max = i;
				i = i - (max - min) / 2;

			}
			else {
				min = i;
				i = i + (max - min) / 2;
				
			}
		}

		cout << "Your number is "<<min;
	}

	else {
		cout << "Inavalid number";
	}


	
}
