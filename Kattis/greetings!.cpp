#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string s, output;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'e')
			output += "ee";
		else
			output += s[i];
	}

	cout << output;

	return 0;
}