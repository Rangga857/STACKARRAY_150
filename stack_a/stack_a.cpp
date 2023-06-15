#include <iostream>
#include <string>
using namespace std;

class stackarray {
private :
	string stack_array[5];
	int top;
public :
	//constructor
	stackarray() {
		top = -1;
	}
	string push(string element) {
		if (top == 4) {//step 1
			cout << "Number of data execeeds the limit." << endl;
			return "";
		}
		top++; //step 2
		stack_array[top] = element; //step 3
		cout << element << "ditambahkan(pushed)" << endl;

		return element;
	}
	void pop() {
		if (empty()) { // step 1
			cout << "\nStack is empty. cannot pop." << endl; //1.a
			return; //1.b
		}
		cout << "\nThe Popped element is: " << stack_array[top] << endl;//step 2
		top--;//step 3 decrement

	}
	//method for check if data is empty

	bool empty() {
		return (top == -1);
	}
	void display() {
		if (empty()) {
			
	}

};


