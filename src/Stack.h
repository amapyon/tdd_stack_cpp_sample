#ifndef STACK_H_
#define STACK_H_

#include <exception>

using namespace std;

class EmptyException : public exception {};

class Stack {
private:
	int _size;
	int* _values;
public:
	Stack(): _size(0){
		_values = new int[10];
	};
	virtual ~Stack(){
		delete[] _values;
	};

	bool isEmpty() {
		return _size == 0;
	}

	int size() {
		return _size;
	}

	void push(int value) {
		_values[_size++] = value;
	}

	int top() {
		if (isEmpty()) throw EmptyException();
		return _values[_size - 1];
	}

	void pop() {
		if (isEmpty()) throw EmptyException();
		_size--;
	}
};

#endif /* STACK_H_ */
