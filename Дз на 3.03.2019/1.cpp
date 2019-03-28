#include "pch.h"
#include <iostream>
using namespace std;
struct Node {
	double data;
	Node* next = NULL;
	Node* prev = NULL;
};


class double_stack {
	Node* head;
public:
	double_stack() :head(NULL) {}
	void push(double x) {
		Node* temp = new Node;
		temp->data = x;
		temp->next = head;
		head = temp;
	};


	double pop() {
		if (head == NULL) {
			cout << "Stack is empty";
			return 0;
		};
		Node* temp = head;
		head = head->next;
		double x = temp->data;
		delete temp;
		return x;
	};

	~double_stack() {
		while (head != NULL) {
			Node* temp = head;
			head = head->next;
			delete temp;
		};
	};
};


int main() {
	double_stack A;
	A.push(7.692);
	A.push(83.346);
	A.push(1.905);
	A.push(0.867);
	A.push(13.378);
	A.push(98.929);
	cout << A.pop() << "\n";
	cout << A.pop() << "\n";
	cout << A.pop() << "\n";
	A.push(2.56712);
	A.push(7.4684758);
	A.push(1);
	A.push(10.3467);
	cout << A.pop() << "\n";
	cout << A.pop() << "\n";
	return 0;
};