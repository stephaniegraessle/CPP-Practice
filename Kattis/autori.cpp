#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

//https://open.kattis.com/problems/autori

int main() {
	//used this website for reference
	//https://www.codegrepper.com/code-examples/delphi/c%2B%2B+stringstream+delimiter

	std::string input;
	std::cin >> input;

	std::istringstream ss(input);
	std::string token; //each individual name

	//using '-' as a delimiter to parse input
	while (std::getline(ss, token, '-')) {
		//only output first character from each token (name)
		std::cout << token[0];
	}

	return 0;
}