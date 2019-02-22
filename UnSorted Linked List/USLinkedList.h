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
		length = -1;
	}

	void makeEmpty()
	{
		NodeType* temp;
		while (listData != NULL)
		{
			temp = listData;
			listData = listData->next;
			delete temp;
		}
		length = -1;
	}

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

	void retrieveItem(ItemType& item, bool& found)
	{
		NodeType* location;
		location = listData;
		bool moreToSearch = (location != NULL);

		while (moreToSearch && !found)
		{
			if (item == location->info)
			{
				item = location->info;
				found = true;
			}
			else
			{
				location = location->next;
				moreToSearch = (location != NULL);
			}
		}
	}

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

	void deleteItem(ItemType item)
	{
		NodeType* location;
		NodeType* tmpLocation;

// if the item to be deleted is the first item in the list.
		if (item == listData->info)
		{
			tmpLocation = listData;
			listData = listData->next;
		}
		else
		{
			location = listData;
			while (item != (location->next)->info)
				location = location->next;

			tmpLocation = location->next;
			location->next = (location->next)->next;
		}
		delete tmpLocation;
		length--;
	}

// Reset used to traverse throgh the list from the begining.
	void resetList()
	{
		currentPos = NULL;
	}

	void getNextItem(ItemType& item )
	{
		if (currentPos == NULL)
			currentPos = listData;
		else
			currentPos = currentPos->next;
		item = currentPos->info;
	}

	~UnSortedLinkedList()
	{
		makeEmpty();
	}
};

#endif