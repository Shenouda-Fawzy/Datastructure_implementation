#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

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

	bool isEmpty() const{}

	bool isFull() const{}

	void makeEmpty() {}

	void enqueue(){}

	void dequeue(){}

	~LinkedQueue(){}
};
#endif