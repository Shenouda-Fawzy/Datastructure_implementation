#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

#include<new> // For std::bad_alloc
#include<cstddef> // For NULL

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
	LinkedQueue()
	{
		front = NULL;
		rear = NULL;
	}

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

	void makeEmpty() 
	{
		NodeType* temp;
		while (front != NULL)
		{
			temp = front;
			front = front->next;
			delete temp;
		}
		// We reach the end and if we delete the rear will be pointing to nothing so we put it to NULL.
		rear = NULL;
	}

	void enqueue(ItemType item)
	{
		if (isFull())
			throw FullQueue();
		else
		{

			NodeType* location;
			location = new NodeType;

			location->info = item;
			location->next = NULL; // New node alwyes is the last node.

			if (rear == NULL)
			{
				front = location;
			}
			else
			{
				rear->next = location;
			}
			rear = location;
		}
	}

	ItemType dequeue()
	{
		if (isEmpty())
			throw EmptyQueue();
		else
		{
			NodeType* temp = front;
			ItemType item = front->info;
			front = front->next;

			// We reach the end and if we delete the rear will be pointing to nothing so we put it to NULL.
			if (front == NULL) 
				rear = NULL;
			delete temp;
			return item;
		}
	}

	~LinkedQueue()
	{
		makeEmpty();
	}
};
#endif