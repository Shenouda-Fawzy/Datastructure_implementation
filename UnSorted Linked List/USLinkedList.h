#ifndef USLINKEDLIST_H
#define USLINKEDLIST_H

#include<cstddef>
typedef char ItemType;

class FullStack{};
class EmptyStack{};

struct NodeType
{
	ItemType info;
	NodeType* next;
};

class UnSortedLinkedList
{
private:
	int length;
	NodeType* listData;
	NodeType* currentPos;

public:
	UnSortedLinkedList(){}

	void makeEmpty(){}

	bool isFull()const{}

	int lengthIs() const{}

	void retrieveItem(ItemType& item, bool& found){}

	void putItem(ItemType item){}

	void deleteItem(ItemType item){}

	void resetList(){}

	void getNextItem(ItemType& item ){}

	~UnSortedLinkedList(){}
};

#endif