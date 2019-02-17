#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H
#include <iostream>
using namespace std;
typedef char ItemType;

struct NodeType
{
	ItemType info;
	NodeType* next;
};


class FullStack{};
class EmptyStack{};

class LinkedStack
{
private:
	NodeType* topPtr;

public:
	LinkedStack()
	{
		topPtr = NULL;
	};

	bool isFull()
	{
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

	bool isEmpty()
	{
		if (topPtr == NULL)
			return true;
		else
			return false;
	}

	/**
	The order of these tasks is critical, if we changed the topPtr Before making the Node(location)
	points to the top of the stack, we will lose the acess the stack node.
	**/
	void push(ItemType item)
	{
		if (isFull())
			throw FullStack();
		else{
			// Allocate space for new node.
			NodeType* location;
			location = new NodeType;
			location->info = item;
			location->next = topPtr;
			topPtr = location;
		}
	}

	void pop()
	{
		if (isEmpty())
			throw EmptyStack();
		else
		{
			NodeType* loc; // Temporary ref
			loc = topPtr;
			topPtr = topPtr->next;
			delete loc;

		}
	}

	ItemType top()
	{
		if (isEmpty())
			throw EmptyStack();
		else
			return topPtr->info;
	}

	~LinkedStack()
	{
		NodeType* temp;
		while (topPtr != NULL)
		{
			temp = topPtr;
			topPtr = topPtr->next;
			delete temp;
		}
	}
};



#endif LINKEDSTACK_H