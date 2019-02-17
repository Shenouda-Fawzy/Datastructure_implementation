#include "LinkedStack.h"

int main()
{
	LinkedStack stack = LinkedStack();

	stack.push('A');
	stack.push('B');
	stack.push('D');
	stack.push('E');

	char ch = stack.top();
	cout << ch << endl;
	stack.pop();
	ch = stack.top();
	cout << ch << endl;

	stack.pop();
	ch = stack.top();
	cout << ch << endl;

	stack.pop();
	ch = stack.top();
	cout << ch << endl;

	return 0;
}