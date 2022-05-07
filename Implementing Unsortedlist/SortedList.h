#ifndef SORTEDLIST_H
#define SORTEDLIST_H
#include "House.h"
const int MAXITEM = 100;

class SortedList
{
private:
	House info[MAXITEM]; // info
	int length;
	int currentItem;

public:
	SortedList() : length(0), currentItem(-1)
	{}

	void makeEmpty()
	{
		length = 0;
		//currentItem = -1;
	}

	bool isFull() const
	{
		return length == MAXITEM;
	}

	int lengthIs() const
	{
		return length;
	}

	// Complexity: O(logN)
	void retrieveItem(House& h, bool& found)
	{
// Binary Search O(logN).
		int key; // MidPoint
		int first = 0;
		int last = length - 1;
		bool moreToSearch = (first <= last);
		found = false;
		while (moreToSearch && !found)
		{
			key = (first + last) / 2;
			switch (h.compare(info[key]))
			{
			case Less:
				last = key - 1;
				moreToSearch = (first <= last);
				break;
			case Greater:
				first = key + 1;
				moreToSearch = (first <= last);
				break;
			case Equal:
				found = true;
				h = info[key];
				break;
			}
		}
	}

// Complexity: O(N)
	void putItem(House h)
	{
// Finde the apropirate place to the item. [ Complexity: O(N) ]
		int location = 0;
		bool moreToSearch = (location < length);

		while (moreToSearch)
		{
			switch (h.compare(info[location]))
			{
			case Less: // if h.capacity is less than info[location].capacity
				moreToSearch = false;
				break;
			case Greater:
				location++;
				moreToSearch = (location < length);
				break;
			}
		}

// Make a space for the new item by moving all other elements [ Complexity: O(N) ]
		for (int i = length; i > location; i--)
			info[i] = info[i - 1];
		info[location] = h;

// Increment the list.
		length++;
	}

// Complexity: O(N)
	void deleteItem(House h)
	{
		if (length >= 0)
		{
			int location = 0;
			for (int i = 0; i < length; i++)
			if (h.compare(info[i]) == Equal)
			{
				location = i;
				break; // Delete the first element that match the KEY.
			}

			for (int i = location; i < length; i++)
				info[i] = info[i + 1];
			length--;
		}
	}

	// Initializes the current position for iteration through the list.
	void resetList()
	{
		currentItem = -1; // Current item is prior to the first element in the list.
	}

	void getNextItem(House& h)
	{
		currentItem++;
		if (currentItem < MAXITEM)
			h = info[currentItem];
	}
};
#endif
