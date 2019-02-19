#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

#include<iostream>
using namespace std;

typedef char ItemType;

class FullQueue{};
class EmptyQueue{};

struct NodeType
{
	ItemType info;
	NodeType* next;
};

class LinkedQueue
{
private:
	NodeType* front;
	NodeType* rear;

public:
	LinkedQueue(){}

	bool isEmpty() const
	{
		if (front == NULL)
			return true;
		else
			return false;
	}

	bool isFull() const
	{
		NodeType* newLocation;
		try
		{
			newLocation = new NodeType;
			delete newLocation;
			return false;
		}
		catch (std::bad_alloc Exception)
		{
			return true;
		}
	}

	void makeEmpty() {}

	void enqueue(){}

	void dequeue(){}

	~LinkedQueue(){}
};
#endif