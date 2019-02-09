#ifndef STACK_H
#define STACK_H
const int MAXITEM = 5;
// info is a stack of character.
class FullStack{}; // info used when trying to push more element and the stack is full.
class EmptyStack{}; // info used when trying to pop from an empty stack.

template <class type>
class Stack
{
	// Item which stack handle.
private:
	//type items[MAXITEM];
	int top; // It's point to the top element of the stack.
	int maxStack;
	type* items; // Pointer used to refrence array.

public:
	Stack()	
	{
		maxStack = 500;
		top = -1;
		items = new type[maxStack]; // Dynamically allocate memory.
	};
	Stack(int max)
	{
		maxStack = max;
		top = -1;
		items = new type[maxStack];
	}
	bool isEmpty()const 
	{
		if (top == -1)
			return true;
		else
			return false;
	};
	bool isFull()const 
	{
		if (top == MAXITEM - 1)
			return true;
		else
			return false;
	}
	void push(type ch)
	{
		if (isFull())
			throw FullStack();
		top++; // Create place.
		items[top] = ch; // put the new item.
	}
	void pop()
	{
		if (isEmpty())
			throw EmptyStack();
		top--;
	}
	type Top()
	{
		if (isEmpty())
			throw EmptyStack();
		return items[top];
	}
	~Stack() // Distructor.
	{
		delete [] items; // release the stack memory.
	}
};

#endif