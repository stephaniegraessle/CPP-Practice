#include <stdio.h>
//#include <stdlib.h>
/*
when I didn't comment this out, using "cout" inside the switch statement
gave me the error '"cout" is ambiguous' for some reason (while testing)
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	int N; //number of hands; hand is four cards
	char B; //value of suit (S, H, D, C)--dominant suit
	int points = 0;
	string input; //input[0] = card type, input[1] = card suit

	cin >> N;
	cin >> B;

	for (int i = 0; i < N*4; i++) {
		cin >> input;

		//had error properly determining whether card is dominant or not--
		//accidently put 'B' instead of just B in if statements

		switch (input[0]) {
		case 'A':
			points += 11;
			break;
		case 'K':
			points += 4;
			break;
		case 'Q':
			points += 3;
			break;
		case 'J':
			if (input[1] == B)
				points += 20;
			else
				points += 2;
			break;
		case 'T':
			points += 10;
			break;
		case '9':
			if (input[1] == B)
				points += 14;
			break;
		default:
			//if any other card, no points will be given
			break;
		}
		//used for testing how much points counted up with each card
		//cout << points << endl << endl;
	}

	//print out total points
	cout << points;

	return 0;
}