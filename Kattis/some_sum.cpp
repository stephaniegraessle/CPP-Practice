#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

/*
	1 - 1 or 2 (Either)
	2 - 1+2=3, 2+3=3 (Odd)
	3 - 1+2+3=6, 2+3+4=9, 3+4+5=12 (Either)
	4 - 1+2+3+4=10, 2+3+4+5=14 (Even)
	5 - 1+..+5=15, 2+3+4+5+6=20 (Either)
	6 - 1+..+6=21, 2+3+4+5+6+7=27 (Odd)
	7 - 1+..+7=28, 2+..+8=35 (Either)
	8 - 1+..+8=36, 2+..+9=44 (Even)
	9 - 1+..+9=
	10 -

	a = even or odd, b = even or odd

	1, 5, 7 = Either
	2, 6 = Odd
	4, 8 = even
*/

int main() {
	int n;
	cin >> n;
	
	if (n % 4 == 0)
		cout << "Even";
	else if (n % 2 == 0)
		cout << "Odd";
	else
		cout << "Either";

	return 0;
}