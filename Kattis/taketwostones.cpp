#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;

	if (N % 2 == 0)
		cout << "Bob";
	else
		cout << "Alice";

	//system("pause");
	return 0;
}
