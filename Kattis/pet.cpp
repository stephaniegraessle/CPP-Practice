#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

//https://open.kattis.com/problems/pet

int main() {
	int contestants[5] = { 0,0,0,0,0 };
	int grade;
	int winner = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> grade;
			contestants[i] += grade;
		}
		if (contestants[i] >= contestants[winner]) {
			winner = i;
		}
	}

	//creating things like this to test out areas of the code helps out in testing
	//when the solution doesn't work the first time
	/*
	for (int i = 0; i < 5; i++) {
		cout << contestants[i] << " ";
	}
	cout << endl;
	*/

	cout << winner + 1 << " " << contestants[winner];

	return 0;
}