#pragma once
#ifndef HASH_TABLE
#define HASH_TABLE

const int MAX_ITEMS = 100;
typedef char ItemType;

class HashTable 
{
private:
	ItemType* Table;


	int hash(int key)
	{
		return key % MAX_ITEMS;
	}

public:
	HashTable() 
	{
		Table = new ItemType[MAX_ITEMS];
	}

	void InsertItem(int key, ItemType value) 
	{
		int hashedKey = hash(key);
		Table[hashedKey] = value;
	}

	ItemType retriveItem(int key) 
	{
		int hashedKey = hash(key);
		return Table[hashedKey];
	}
};
#endif