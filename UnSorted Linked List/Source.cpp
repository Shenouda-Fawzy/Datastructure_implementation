#include "USLinkedList.h"
#include<iostream>
using namespace std;

int main()
{
	UnSortedLinkedList list = UnSortedLinkedList();
	list.putItem('A');
	list.putItem('B');
	list.putItem('C');
	list.putItem('D');

	list.resetList();

	char ch = 'a';
	for (int i = 0; i < list.lengthIs(); i++)
	{
		list.getNextItem(ch);
		cout << ch << endl;
	}

	cout << "DELETING ....\n";
	ch = 'D';
	list.deleteItem(ch);
	list.resetList();
	for (int i = 0; i < list.lengthIs(); i++)
	{
		list.getNextItem(ch);
		cout << ch << endl;
	}
	cout << list.isFull() << endl;
	return  0;
}