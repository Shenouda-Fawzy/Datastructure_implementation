#ifndef USLIST_H
#define USLIST_H
#include "House.h"
const int LIST_MAXITEM = 100;

class Ulist
{
private:
	House info[LIST_MAXITEM]; // info
	int length;
	int currentItem;

public:
	Ulist() : length(0), currentItem(-1)
	{
		//info = { 0 };
	}

	void makeEmpty()
	{
		length = 0;
		//currentItem = -1;
	}

	bool isFull() const
	{
		return length == LIST_MAXITEM;
	}

	int lengthIs() const
	{
		return length;
	}

	// Complexity: O(N)
	void retrieveItem(House& h, bool& found)
	{
		for (int i = 0; i < length; i++)
		{
			if (h.compare(info[i]) == Equal)
			{
				h = info[i];
				found = true;
				break;
			}
			else
			{
				found = false;
				
			}
		}
	}

	void putItem(House h)
	{
		if (length < LIST_MAXITEM)
			info[length] = h; // Put the item in the current location.
		length++;
	}

	// Complexity: O(N)
	void deleteItem(House h)
	{
		if (length >= 0)
		{
			// Complexity: O(N)
			for (int i = 0; i < length; i++)
			if (h.compare(info[i]) == Equal)
			{
				info[i] = info[length - 1]; // Override this item with the last item.
				length--;
				break; // Delete the first element that match the KEY.
			}
		}
	}

	// Initializes the current position for iteration through the list.
	void resetList()
	{
		currentItem = -1; // Current item is prior to the first element in the list.
	}

// Get the next item on the list.
	// Complexity: O(1).
	void getNextItem(House& h)
	{
		currentItem++;
		if (currentItem < LIST_MAXITEM)
			h = info[currentItem];
	}
};

#endif
