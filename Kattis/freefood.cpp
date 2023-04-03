#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
	int N, s, t;
	int freedays = 0;
	bool free[365];

	for (int i = 0; i < 365; i++) {
		free[i] = false;
	}

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s;
		cin >> t;
		for (int j = s - 1; j < t; j++) {
			free[j] = true;
		}
	}

	for (int i = 0; i < 365; i++) {
		if (free[i] == true) {
			freedays++;
		}
	}

	cout << freedays << endl;

	//system("pause");
	return 0;
}
