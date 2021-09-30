#include "Stack.h"
#include <ctime>

void isCorrect(Stack& ST_copy);

int main()
{
	srand(time(0));

	Stack ST; // stack for string
	char str[50]; // charr array for string

	// get string as input
	cout << "Enter string: ";
	cin.getline(str, 49);

	cout << endl;

	// push string characters to stack
	for (int i = 0; str[i] != ';'; i++)
	{
		//cout << str[i] << " ";
		ST.push(str[i]);
	}

	// create stack copy to change it
	Stack ST_copy = ST;

	// check is string correct
	isCorrect(ST_copy);

	cout << endl << endl;
}

void isCorrect(Stack& ST_copy)
{
	Stack brackets; // stack for brackets in the string
	Stack incorrect_string; // stack for output incorrect string

	for (int i = 0; i < ST_copy.getCount() + 1; i++)
	{
		if (ST_copy.getLast() == '}' ||	ST_copy.getLast() == ')' ||	ST_copy.getLast() == ']')
		{
			brackets.push(ST_copy.getLast());
		}
		else if (ST_copy.getLast() == '{' && brackets.getLast() != '}' || ST_copy.getLast() == '(' && brackets.getLast() != ')' || ST_copy.getLast() == '[' && brackets.getLast() != ']')
		{
			cout << "String is not correct!" << endl;
			for (int i = 0; i < ST_copy.getCount(); i++)
			{
				incorrect_string.push(ST_copy.pop());
			}
			for (int i = 0; i < ST_copy.getCount(); i++)
			{
				cout << incorrect_string.pop() << " ";
			}
			return;
		}
		else if (ST_copy.getLast() == '{' && brackets.getLast() == '}' || ST_copy.getLast() == '(' && brackets.getLast() == ')' || ST_copy.getLast() == '[' && brackets.getLast() == ']')
		{
			brackets.pop();
		}
		ST_copy.pop();
	}

	cout << "String is correct!" << endl;
}