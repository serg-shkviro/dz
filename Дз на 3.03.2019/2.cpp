#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
struct Node {
	string data;
	Node* next = NULL;
};


class string_queue {
	Node* head;

public:
	
	
	string_queue() :head(NULL) {}
	void push(string x) {
		
		if (head == NULL) {
			head = new Node;
			head->data = x;
		};
	
		
		Node* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		};
		
		temp->next = new Node;
		temp->next->data = x;

	};
	
	
	string pop() {
		if (head == NULL) {
			cout << "Queue is empty";
			return 0;
		};
		
		
		Node* temp = head;
		head = head->next;
		string x = head->data;
		delete temp;
		return x;
	};
	
	
	~string_queue() {
		while (head != NULL) {
			Node* temp = head;
			head = head->next;
			delete temp;
		};
	};
};


int main() {
	string_queue A;
	A.push("Sorry?");
	A.push("Oh fu...");
	A.push("Really? This Okey?");
	A.push("I want to sleep");
	A.push("But proga want to live");
	cout << A.pop() << " ";
	cout << A.pop() << "\n";
	cout << A.pop();
	return 0;
};
