﻿// He12.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

// 20/20

using namespace std;

template <typename T>
int LinearSearch(const T list[], T key, int arraysize)
{
	for (int i = 0; i < arraysize; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}

int main()
{
	int test1[] = { 1, 2, 3, 4, 5 };
	double test2[] = { 3.3, 4.5, 4.1 };
	//PT -- hey, me too!
	string test3[] = { "I", "love", "computer", "science" };


	//PT -- it'd be good to have a test to find an item as well as search for an item that doesn't exist, but for all three types.
	cout << LinearSearch(test1, 1, 5) << endl;
	cout << LinearSearch(test2, 4.2, 3) << endl;
	cout << LinearSearch(test3, string("Class"), 4 );
	
}

