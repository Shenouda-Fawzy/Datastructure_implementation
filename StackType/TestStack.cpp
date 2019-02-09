#include<iostream>
#include "Stack.h"
using namespace std;
void testStack();
void testPointers();

int main()
{
	//testPointers();
	testStack();
	return 0;
}

void testStack()
{
	int max = 0;
	cout << "Enter stack size: " ;
	cin >> max;
	Stack<int> stack = Stack<int>(max);
	bool test;	
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);
	test = stack.isFull();
	cout << test << endl;

	while (!stack.isEmpty())
	{
		int value = stack.Top();
		stack.pop();
		cout << value << " ";
	}

}

void testPointers()
{
	int* mony = new int;
	*mony = 20;

	int* myMony = new int;
	*myMony = 30;

	cout << "MyMony value: " << *myMony << " And the address: " << myMony <<  endl;
	cout << "Mony value: " << *mony << " And the address: " << mony << endl;
	
	delete myMony; // Delete the location with myMony points to.
	myMony = mony; // Assign myMony The same location of mony.
	
	cout << "Deleted" << endl;
	cout << "MyMony value: " << *myMony << " And the address: " << myMony << endl;
}