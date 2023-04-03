#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int N; //commands
	string command, check;
	check = "";

	cin >> N;

	for (int i = 0; i <= N; i++) {
		getline(cin, command);
		check = command.substr(0, 10);
		if (check == "Simon says") {
			cout << command.substr(10, command.length()-1) << endl;
		}
		check = "";
	}

	//system("pause");
	return 0;
}
