#include "pch.h"
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool Brackets(char opening, char closing) {
	if (opening == '(' && closing == ')') return true;
	else if (opening == '[' && closing == ']') return true;
	else if (opening == '{' && closing == '}') return true;
	return false;
};

bool BalancedParentheses(string b) {
	stack<char> A;
	for (int i = 0; i < b.length(); i++) {
		if (b[i] == '(' || b[i] == '{' || b[i] == '[')
			A.push(b[i]);
		else if (b[i] == ')' || b[i] == '}' || b[i] == ']') {
			if (A.empty() || !Brackets(A.top(), b[i]))
				return false;
			else
				A.pop();
		};
	};
	return A.empty();
};


int main() {
	string c;
	cout << "Enter: ";
	cin >> c;
	if (BalancedParentheses(c))
		cout << "Okey" << endl;
	else
		cout << " no" << endl;
	return 0;
};