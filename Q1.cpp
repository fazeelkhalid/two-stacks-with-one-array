#include<iostream>
#include"doubleStack.h"
using namespace std;
int menu() {
	int operation = -1;
	while (operation <= -1|| operation >= 10) {
		cout <<endl<< char(201); // print left top corner
		for (int i = 0; i < 40; i++) { // printer upper line
			cout << char(205);
		}
		cout << char(187); // print right top corner
		cout <<endl<< char(186); // print left line
		cout<< "   Error \"-9999999\" means Stack empty   ";
		cout << char(186); // print right line
		cout <<endl << char(200); // print left bottom corner
		for (int i = 0; i < 40; i++) { // printer lower line
			cout << char(205);
		}
		cout << char(188);//print right bottom corner
		cout << "\n0 : exit";
		cout << "\n1 : Push in stack 1";
		cout << "\n2 : Push in stack 1";
		cout << "\n3 : pop from stack 1";
		cout << "\n4 : pop from stack 2";
		cout << "\n5 : Top of stack 1";
		cout << "\n6 : Top of stack 2";
		cout << "\n7 : Print all stack1";
		cout << "\n8 : Print all stack2";
		cout << "\n9 : clear Screen\n-----> ";
		cin >> operation;
	}
	return operation;
}



int main() {
	int size1 = 0; // store stack 1 size;
	int size2 = 0;// store stack 2 size;
	while (size1 <= 0) {
		cout << "Please Enter stack1 size greater then zero : ";
		cin >> size1;
	}
	while (size2 <= 0) {
		cout << "\nPleaase enter stack2 size greater then zero : ";
		cin >> size2;
	}
	doubleStack <int> stack(size1,size2);
	int operation = -1;
	while(operation) {
		operation = menu();
		if (operation == 1) { // push data in stack 1
			int element;
			cout << "\nEnter data : ";
			cin >> element;
			stack.push1(element);
		}
		else if (operation == 2) { //push data in stack 2
			int element;
			cout << "\nEnter data : ";
			cin >> element;
			stack.push2(element);
		}
		else if (operation == 3) { // pop from stack 1
			stack.pop1();
		}
		else if (operation == 4) {// pop from stack 2
			stack.pop2();
		}
		else if (operation == 5) { //print top of stack 1
			cout << "\nTop of stack1 = " << stack.top1();
		}
		else if (operation == 6) {//print top of stack 2
			cout << "\nTop of stack2 = " << stack.top2();
		}
		else if (operation == 7) {//print all stack 1
			int number = 0; // store number befor printing;
			while (number != -9999999) {
				number = stack.top1();
				if (number != 9999999) {
					cout << "Stack1 data : "<<number<<endl;
					stack.pop1();
				}
			}
		}
		else if (operation == 8) { //print all stack2
			int number = 0; // store number befor printing;
			while (number != -9999999) {
				number = stack.top2();
				if (number != 9999999) {
					cout << "Stack1 data : " << number<<endl;
					stack.pop2();
				}
			}
		}
		else if (operation == 9) {
			system("CLS");
		}
	}
	return 0;
}