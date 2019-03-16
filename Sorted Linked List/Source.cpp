#include "SortedLinkedList.h"
#include<iostream>
using namespace std;

int main()
{
	SortedLinkedList list = SortedLinkedList();
	list.insertItem('A');
	list.insertItem('B');
	list.insertItem('C');
	list.insertItem('E');
	list.insertItem('D');

	list.resetList();
	for (int i = 0; i < list.lengthIs(); i++)
	{
		char ch;
		bool found;
		list.getNextItem(ch);
		cout << ch << endl;
	}
}