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
		stack_array[top] = element;
		cout << element << "ditambahkan(pushed)" << endl;

		return element;
	}
	void pop() {
		if (empty()) {
			cout << "\nStack is empty. cannot pop." << endl;
			return;
		}
		cout << "\nThe Popped element is: " << stack_array[top] << endl;
		top--;

	}

};


