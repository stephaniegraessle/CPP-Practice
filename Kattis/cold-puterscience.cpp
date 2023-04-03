#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
	//want to know total number of days temp was below 0 C

	//total number of temps collected
	int n;
	//temperatures
	int t;

	int belowZeroTotal = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> t;
		if (t < 0) {
			belowZeroTotal++;
		}
	}

	cout << belowZeroTotal;

	return 0;
}