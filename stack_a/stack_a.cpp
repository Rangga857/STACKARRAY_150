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
	void push() {
		if (top == 4) {//step 1

			cout << "Number of data execeeds the limit." << endl;
			return;

		}
		cout << "\nEnter a element: ";
		string element;
		getline(cin, element);
		top++; //step 2
		stack_array[top] = element; //step 3
		cout << element << "ditambahkan(pushed)" << endl;
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
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = 0; tmp <= top; tmp++)
				cout << stack_array[tmp] << endl;
		}
	}

};

int main() {
	stackarray s;
	while (true) {
		cout << endl;
		cout << "\n***stack menu***\n";
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. Display\n";
		cout << "4. Exit\n";
		cout << "\nEnter your choice: ";
		string input;
		getline(cin, input);
		char ch = (input.empty() ? '0' : input[0]);
		switch (ch) {
		case '1': {
			s.push();
			break;
			}
		case '2':
			if (s.empty()) {
				cout << "\nStack is empty. " << endl;
				break;
			}
			s.pop();
			break;
		case '3':
			s.display();
			break;
		case '4':
			return 0;
		default :
			cout << "\nInvalid choice" << endl;
			break;
		}
	}
}


