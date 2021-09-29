#pragma once

#include<iostream>
#include<cstring>

using namespace std;

template<class T>
class Stack
{
	enum { EMPTY = -1, FULL = 30 };

	T stack[FULL + 1];

	int top;
public:
	//ctor
	Stack<T>();
	//push
	void push(T c);
	//pop
	T pop();
	//clear
	void clear();
	//empty
	bool isEmpty();
	//full
	bool isFull();
	//count
	int getCount();
};

template<class T>
Stack<T>::Stack()
{
	top = EMPTY;
}

template<class T>
void Stack<T>::push(T c)
{
	if (!isFull()) stack[++top] = c;
	else cout << "Stack is full!" << endl;
}

template<class T>
T Stack<T>::pop()
{
	if (!isEmpty()) return stack[top--];
	else return 0;
}

template<class T>
void Stack<T>::clear()
{
	top = EMPTY;
}

template<class T>
bool Stack<T>::isEmpty()
{
	return top == EMPTY;
}

template<class T>
bool Stack<T>::isFull()
{
	return top == FULL;
}

template<class T>
int Stack<T>::getCount()
{
	return top + 1;
}