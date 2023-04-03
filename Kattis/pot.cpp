#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

//https://open.kattis.com/problems/pot

int main() {
	int n, p;
	int x = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> p;
		x += pow(p / 10, p % 10);
	}

	cout << x;

	return 0;
}