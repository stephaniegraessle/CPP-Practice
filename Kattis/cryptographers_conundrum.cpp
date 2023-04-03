#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string ciphertext;
	int days = 0;

	cin >> ciphertext;

	for (int i = 0; i < ciphertext.length(); i++) {
		if ((i + 1) % 3 == 1 && ciphertext[i] != 'P') {
			ciphertext[i] = 'P';
			days++;
		}
		else if ((i + 1) % 3 == 2 && ciphertext[i] != 'E') {
			ciphertext[i] = 'E';
			days++;
		}
		else if ((i + 1) % 3 == 0 && ciphertext[i] != 'R') {
			ciphertext[i] = 'R';
			days++;
		}
	}
	//cout << ciphertext;
	cout << days;

	return 0;
}