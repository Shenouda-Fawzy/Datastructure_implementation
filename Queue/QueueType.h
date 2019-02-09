#ifndef QUEUETYPE_H
#define QUEUETYPE_H

class FullQueue{};
class EmptyQueue{};

typedef char ItemType;

class QueueType
{
private:
	ItemType *items;
	int maxQue;
	int front; // point to reserved slot pefor the element that will be dequeued.
	int rear;

public:
	QueueType() 
	{
		maxQue = 501; // Add one for the reserved slot pointed by front.
		front = maxQue - 1; // point to the last element 
		rear = front;
		items = new ItemType[maxQue];
	}

	QueueType(int max)
	{
		maxQue = max + 1; // Add one for the reserved slot pointed by front.
		front = maxQue - 1; // point to the last element 
		rear = front;
		items = new ItemType[maxQue];
	}

	void makeEmpty()
	{
		// Rear = front = maxQue - 1.
		front = maxQue - 1; // point to the last element 
		rear = front;
	}

	bool isEmpty() const
	{
		return (rear == front);
	}

	bool isFull() const
	{
		return ((rear + 1) % maxQue) == front;
	}

	// We put from the rear.
	void enqueue(ItemType item)
	{
		if (isFull())
			throw FullQueue();
		rear = (rear + 1) % maxQue; // get the index to the next element.
		items[rear] = item;
	}

	// We pop from the front.
	void dequeue(ItemType &item)
	{
		if (isEmpty())
			throw EmptyQueue();
		front = (front + 1) % maxQue; // put on the next slot after the reserved one.
		item = items[front];
	}

	~QueueType()
	{
		delete[] items; // release memory allocated by items.
	}
};

#endif