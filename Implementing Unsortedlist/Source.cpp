#include<iostream>
#include "SortedList.h"
#include "USList.h"

using namespace std;
//void testUnsortedList(); // Method declaration.
void testSortedList();

int main()
{
	//testUnsortedList();
	testSortedList();
	return 0;
}

void testUnsortedList()
{
	Ulist list;
	House h1, h2, h3, h4, h5;
	ofstream out("output.txt", ios::trunc);
	ifstream inFile("input.txt");
	h1.read(inFile);
	h2.read(inFile);
	h3.read(inFile);
	h4.read(inFile);
	h5.read(inFile);
	cout << "__________ INSERTING OBJs to the list __________" << endl;
	list.putItem(h1);
	list.putItem(h2);
	list.putItem(h3); // It will be deleted.
	list.putItem(h4);
	list.putItem(h5);
	cout << "__________ Diaplaying the item of the list __________" << endl;
	for (int i = 0; i < list.lengthIs(); i++)
	{
		House h;
		list.getNextItem(h);
		h.showData();
	}
	list.resetList();

	cout << "Check if h3 exists" << endl;

	bool found = false;
	list.retrieveItem(h3, found);
	if (found == true)
		cout << "H3 is retrived" << endl;
	else
		cout << "NOT FOUND" << endl;

	list.deleteItem(h3);
	cout << "__________ After DELETING h3 __________" << endl;
	for (int i = 0; i < list.lengthIs(); i++)
	{
		House h;
		list.getNextItem(h);
		h.showData();
	}
	list.resetList();


	list.retrieveItem(h3, found);
	if (found == true)
		cout << "H3 is retrived" << endl;
	else
		cout << "NOT FOUND" << endl;


	cout << "Hello from C++" << endl;
	inFile.close();
}
void testSortedList()
{
	SortedList list;
	House h1, h2, h3, h4, h5;
	House h6 = House("Hassan", 4);
	ofstream out("output.txt", ios::trunc);
	ifstream inFile("input.txt"); // read from input.txt
	h1.read(inFile); // 5
	h2.read(inFile); // 7
	h3.read(inFile); // 6
	h4.read(inFile); // 9
	h5.read(inFile); // 1
	
	cout << "__________ INSERTING OBJs to the list __________" << endl;
	list.putItem(h1);
	list.putItem(h2);
	list.putItem(h3); // It will be deleted.
	list.putItem(h4);
	
	cout << "__________ Diaplaying the item of the list __________" << endl;
	for (int i = 0; i < list.lengthIs(); i++)
	{
		House h;
		list.getNextItem(h);
		h.showData();
	}
	list.resetList();
	list.putItem(h5);

	cout << "Retriving Items" << endl;
	bool found;
	list.retrieveItem(h6, found);
	cout << "4 is " << found << endl;
	list.retrieveItem(h5, found);
	cout << "1 is " << found <<  endl;
	list.retrieveItem(h4, found);
	cout << "9 is " << found << endl;
	House h10 = House("asd", 10);
	list.retrieveItem(h10, found);
	cout << "10 is " << found << endl;

	cout << "______ DELETING ITEMS ______" << endl;
	list.deleteItem(h1);
	list.deleteItem(h5);
	list.deleteItem(h3);
	list.deleteItem(h4);
	for (int i = 0; i < list.lengthIs(); i++)
	{
		House h;
		list.getNextItem(h);
		h.showData();
	}
	list.resetList();
	
	cout << "Hello from C++" << endl;
	inFile.close();
}