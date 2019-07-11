// HashTable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	HashTable table = HashTable();
	table.InsertItem(310, 'a');
	table.InsertItem(312, 'b');
	table.InsertItem(13, 'c');

	char a = table.retriveItem(310);
	char b = table.retriveItem(312);
	char c = table.retriveItem(13);
	


	cout << a << " - " << b << " - " << c <<endl;
}
