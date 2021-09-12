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
	//clear
	void clear();
	//empty
	bool isEmpty();
	//full
	bool isFull();
	//count
	int getCount();
};

