#include"QueueType.h"
#include <iostream>

using namespace std;
int main()
{
	QueueType queue = QueueType(5);
	cout << queue.isFull() << endl;
	cout << queue.isEmpty() << endl;
	queue.enqueue('A');
	cout << queue.isEmpty() << endl;
	queue.enqueue('B');
	queue.enqueue('C');
	queue.enqueue('D');
	queue.enqueue('E');
	cout << queue.isFull() << endl;
	//queue.enqueue('F');
	while (!queue.isEmpty())
	{
		char ch = 'z';
		queue.dequeue(ch);
		cout << ch << " ";
	}

	cout << endl;
	return 0;
}