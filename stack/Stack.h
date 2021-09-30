#pragma once

#include<iostream>
#include<cstring>

using namespace std;

class Stack
{
	enum { EMPTY = -1, FULL = 30 };

	char stack[FULL + 1];

	int top;
public:
	//ctor
	Stack();
	//push
	void push(char c);
	//pop
	char pop();
	//get last
	char getLast()const;
	//clear
	void clear();
	//empty
	bool isEmpty();
	//full
	bool isFull();
	//count
	int getCount();
};

Stack::Stack()
{
	top = EMPTY;
}

void Stack::push(char c)
{
	if (!isFull()) stack[++top] = c;
	else cout << "Stack is full!" << endl;
}

char Stack::pop()
{
	if (!isEmpty()) return stack[top--];
	else return 0;
}

char Stack::getLast()const
{
	return stack[top];
}

void Stack::clear()
{
	top = EMPTY;
}

bool Stack::isEmpty()
{
	return top == EMPTY;
}

bool Stack::isFull()
{
	return top == FULL;
}

int Stack::getCount()
{
	return top + 1;
}