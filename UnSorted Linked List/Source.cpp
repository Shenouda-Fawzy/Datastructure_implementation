#include "USLinkedList.h"
#include <iostream>
using namespace std;

int main()
{
    UnSortedLinkedList list = UnSortedLinkedList();
    list.putItem('A');
    list.putItem('B');
    list.putItem('C');
    list.putItem('D');

    cout << "Getting results" << endl;
    list.resetList();

    char ch = 'a';
    for (int i = 0; i <= list.lengthIs(); i++)
    {
        list.getNextItem(ch);
        cout << ch << endl;
    }

    cout << "DELETING ....\n";
    ch = 'D';
    list.deleteItem(ch);
    list.resetList();
    for (int i = 0; i <= list.lengthIs(); i++)
    {
        list.getNextItem(ch);
        cout << ch << endl;
    }
    cout <<"Is full: " << boolalpha << list.isFull()  << endl; // boolalpha is to print human redable value of bool True, False instead of 1, 0
    return 0;
}
