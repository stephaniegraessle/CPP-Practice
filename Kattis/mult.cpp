// Stephanie Graessle NAQ
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
	int len, a, n;

	cin >> len;

	for (int i = 0; i < len - 1; i++) {
		cin >> a;
		i++;
		for (int j = i; j < len - 1; j++) {
			cin >> n;
			if (n % a == 0) {
				cout << n << endl;
				i = j;
				break;
			}
		}
	}
	return 0;
}