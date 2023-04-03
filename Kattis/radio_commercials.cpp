/*
    Radio Commercials
    https://open.kattis.com/problems/commercials
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <limits.h> // INT_MIN

using namespace std;

int main() {
    // dynamic programming algorithm
	/*
	public static int maxSubArray(int[] arr) {
        int n = arr.length;
        int maxSum = Integer.MIN_VALUE;
        int currSum = 0;

        for (int i = 0; i <= n - 1; i++) {
          currSum += arr[i];

          if (currSum > maxSum) {
            maxSum = currSum;
          }

          if (currSum < 0) {
            currSum = 0;
          }
        }

        return maxSum;
    }
	*/

    int N, P, studentCount;
    // N = total num of breaks in a day
    // P = price of one break

    int maxProfit = INT_MIN;
    int currProfit = 0;
    //int breakCount = 3;

    vector<int> students;

    cin >> N >> P;

    for (int i = 0; i < N; i++) {
        cin >> studentCount;
        students.push_back(studentCount - P);
    }

    for (int i = 0; i <= N - 1; i++) {
        currProfit += students.at(i);

        if (currProfit > maxProfit) {
            maxProfit = currProfit;
        }
        if (currProfit < 0) {
            currProfit = 0;
        }
    }
    cout << maxProfit;

	return 0;
}