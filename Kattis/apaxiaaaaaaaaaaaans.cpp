#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

//https://open.kattis.com/problems/apaxiaaans

int main() {
	string input, output;
	char c;

	cin >> input;
	
	for (int i = 0; i < input.length(); i++) {
		if (input[i] != input[i + 1]) {
			output += input[i];
		}
	}

	cout << output;

	return 0;
}