#include "Stack.h"

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
