#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int n; //num of temps
	int temp;
	int below_zero = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp < 0) {
			below_zero++;
		}
	}

	cout << below_zero;

	return 0;
}