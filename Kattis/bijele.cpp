#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
	int kings, queens, rooks, bishops, knights, pawns;

	cin >> kings >> queens >> rooks >> bishops >> knights >> pawns;
	
	cout << 1 - kings << " ";
	cout << 1 - queens << " ";
	cout << 2 - rooks << " ";
	cout << 2 - bishops << " ";
	cout << 2 - knights << " ";
	cout << 8 - pawns << " ";

	return 0;
}
