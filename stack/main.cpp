#include "Stack.h"
#include <ctime>

int main()
{
	srand(time(0));
	Stack<char> ST;
	char c;

	while (!ST.isFull()) {
		c = rand() % 4 + 2;
		cout << c << " ";
		ST.push(c);
	}

	cout << endl << endl;

	while (c = ST.pop()) {
		cout << c << " ";
	}
	cout << "\n\n";
}