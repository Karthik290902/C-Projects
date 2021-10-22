#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	// Word to be guessed can be assumed to be at most 20 characters long (including end-of-string null character)
	char HangmanWord[20];

	char GuessLetter;

	std::cin >> HangmanWord;
	int value1 = 0;

	bool valid = true;

	// Check that input word only consists of uppercase English letters
	for (int i = 0; i < strlen(HangmanWord); i++)
	{
		if ((HangmanWord[i] > 'Z') || (HangmanWord[i] < 'A'))
		{
			valid = false;
			break;
		}
	}
	while (valid == true)
	{
		std::cin >> GuessLetter;
		if ((GuessLetter > 'Z') || (GuessLetter < 'A'))
		{
			break;
		}

		else {
			for (int i = 0; i < strlen(HangmanWord); i++)
			{
				if (GuessLetter == HangmanWord[i]) {
					value1 = value1 + 1;
				}
			}	
			if (value1 == strlen(HangmanWord)) {

				std::cout << "HANGMAN!\n";
				break;

			}
		}
	}
}
