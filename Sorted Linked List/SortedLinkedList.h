#ifndef SORTEDLINKEDLIST_H
#define SORTEDLINKEDLIST_H

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

class SortedLinkedList
{
private:
	int length;
	NodeType* listData;
	NodeType* currentPos;

public:
	SortedLinkedList()
	{
		listData = NULL;
		currentPos = NULL;
		length = 0;
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
		length = 0;
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

/*
    Insert item uses two pointers with one heading the other, we call the previous one
    is the predLoc. In case the new item is greater than the current item pointed by
    the 'location' then we will move the two pointers. If less, the we create a new node
    and make the predLoc point to the new one, then the new one make to point
    to the current 'location'.
    For more info, read CH.5 insertItem()
*/
	void insertItem(ItemType item)
	{
		if (isFull())
			throw FullList();

		NodeType* newNode;
		NodeType* location;
		NodeType* predLoc;

		bool moreToSearch = false;

		location = listData;
		predLoc = NULL;

		moreToSearch = (location != NULL); // if doesn't reach the end.

// Finding insertion point.
		while (moreToSearch)
		{
			if (location->info < item)
			{
				predLoc = location;
				location = location->next;
				moreToSearch = (location != NULL);
			}
			else
            { // Insertion point found
				moreToSearch = false;
            }
		}

		// Prepare Node for insertion.
		newNode = new NodeType;
		newNode->info = item;

        // Handle the case of the item will be the first item, then it will point
        // to the rest of the list
		if (predLoc == NULL)
		{
			newNode->next = listData;
			listData = newNode;
		}
		else
		{
			newNode->next = location;
			predLoc->next = newNode;
		}
		length++;
	}

	void deleteItem(ItemType item)
	{
		NodeType* location = listData;
		NodeType* tmpLocation;

// if the item to be deleted is the first item in the list.
		if (item == listData->info)
		{
			tmpLocation = location;
			listData = listData->next;
		}
		else
		{
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

	~SortedLinkedList()
	{
		makeEmpty();
	}
};

#endif
