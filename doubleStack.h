#define doubleStack_H
#include<iostream>
using namespace std;

//In my doubly stack both stacks(stack1,stack2) size can vary
template<typename T>
class doubleStack {
private:
	T *data;
	int Top1;
	int Top2;
	int size1;
	int size2;
public:
	doubleStack() {
		data = NULL;
		Top1 = 0;
		Top2 = 0;
		size1 = 0;
		size2 = 0;
	}
	doubleStack(int size1, int size2) {
		this->size1 = size1;
		this->size2 = size2;
		int sumSize = size1 + size2;
		data = new T[sumSize];
		Top1 = 0;
		Top2 = this->size1;
	}
	T top1() {
		if (Top1-1 < 0) {
			return -9999999;
		}
		else {
			return data[Top1-1];
		}
	}
	T top2() {
		if (Top2-1 < size1) {
			return -9999999;
		}
		else {
			return data[Top2-1];
		}
	}
	void push1(T element) {
		if (Top1 < size1) {
			data[Top1] = element;
			if (Top1 <= size1 - 1) {
				Top1++;
			}
		}
		else {
			cout << "\nStack1 Full :(";
		}
	}
	void push2(T element) {
		if (Top2 < size1+ size2) {
			data[Top2] = element;
			if (Top2 <= (size1 + size2) - 1) {
				Top2++;
			}
		}
		else {
			cout << "\nStack2 Full :(";
		}
	}
	void pop1() {
		if (Top1 >= 0) {
			Top1--;
		}
	}
	void pop2() {
		if (Top2 >= size1) {
			Top2--;
		}
	}
};
