#include<iostream>
#include "LinkedQueue.h"

using namespace std;

int main()
{
	LinkedQueue lQueue = LinkedQueue();


	lQueue.enqueue('A');
	lQueue.enqueue('B');
	lQueue.enqueue('C');
	lQueue.enqueue('D');

	cout << "is Empty: " << lQueue.isEmpty()<< endl;


	char ch = lQueue.dequeue();
	cout << ch << endl;

	ch = lQueue.dequeue();
	cout << ch << endl;

	ch = lQueue.dequeue();
	cout << ch << endl;

	ch = lQueue.dequeue();
	cout << ch << endl;

	cout << " ------------------------------------- " << endl;

	lQueue.enqueue('a');
	lQueue.enqueue('b');
	lQueue.enqueue('c');
	lQueue.enqueue('d');


	ch = lQueue.dequeue();
	cout << ch << endl;

	ch = lQueue.dequeue();
	cout << ch << endl;

	ch = lQueue.dequeue();
	cout << ch << endl;

	ch = lQueue.dequeue();
	cout << ch << endl;

	return 0;

}