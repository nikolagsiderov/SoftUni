// GreaterNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int first_num;
	int second_num;

	cin >> first_num >> second_num;

	if (first_num >= second_num)
	{
		cout << first_num;
	}
	else
	{
		cout << second_num;
	}

	return 0;
}
