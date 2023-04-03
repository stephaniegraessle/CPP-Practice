#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	//x is the mB that can be used per month
	//n is number of months Pero has been using data
	//used is mB of data used out of x mB per month
	//extra mB is added to the monthly "available" amount that can be used
  
	int x, n, used, available;
	cin >> x >> n;
	available = x;
  
	for (int i = 0; i < n; i++)
	{
		available += x;
		cin >> used;
		available -= used;
	}
	
  cout << available;

	//system("pause");
	return 0;
}
