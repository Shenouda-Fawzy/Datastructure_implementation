#ifndef USLINKEDLIST_H
#define USLINKEDLIST_H

#include<cstddef>
#include<new>
typedef char ItemType;

class FullList{};
class EmptyList{};

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
	UnSortedLinkedList()
	{
		listData = NULL;
		currentPos = NULL;
		length = 0;
	}

	void makeEmpty(){}

	bool isFull()const
	{
		// Trying to allocate new space (Node).
		NodeType* location;
		try
		{
			location = new NodeType;
			delete location;
			return false;
		}
		catch (std::bad_alloc Exception)
		{
			return true;
		}
	}

	int lengthIs() const
	{
		return length;
	}

	void retrieveItem(ItemType& item, bool& found){}

	void putItem(ItemType item)
	{
		if (isFull())
			throw FullList();
		NodeType* location;
		location->info = item;
		location->next = listData;
		listData = location;
		length++;
	}

	void deleteItem(ItemType item){}

	void resetList(){}

	void getNextItem(ItemType& item ){}

	~UnSortedLinkedList(){}
};

#endif