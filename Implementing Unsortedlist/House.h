#ifndef HOUSE_H
#define HOUSE_H
#include<iostream>
#include<fstream>
#include<ostream>
#include<istream>
#include <string>

using namespace std;

enum RelationType {Less, Equal, Greater};
class House
{
	string name;
	//string address;
	//double price;
	int capacity;
	//int bedroom;
public:
	// Ctor have default values.
	House() : name(""), capacity(0)
	{}
	House(string na, int cap)
	{
		name = na;
		capacity = cap;
	}

// Get data from user.
	void read(ifstream& input)
	{
		//input("input.txt", ios::app);
		getline(input, name, ':');
		string cap = "";
		getline(input, cap, '\n');
		capacity = atoi(cap.c_str());
		/*
		cout << "\nEnter name: ";
		cin >> name;
		cout << "\nEnter Capacity: ";
		cin >> capacity;		
		cout << "_____________________________" << endl;
		*/
		//input.close();
	}

	void showData()
	{
		cout << "Name is: " << name << "\nCapacity is: " << capacity  << endl;
		cout << "_______________________________" << endl;
	}

	RelationType compare(House h1)
	{
		RelationType rt;
		if (capacity < h1.capacity){
			rt = Less;
			return rt;
		}
		if (capacity > h1.capacity)
		{
			rt = Greater;
			return rt;
		}
			
		if (capacity == h1.capacity)
		{
			rt = Equal;
			return rt;
		}
			
	}

	void printToFile(ofstream& out)
	{
		out << name << ":" << capacity << endl;
	}

};

#endif