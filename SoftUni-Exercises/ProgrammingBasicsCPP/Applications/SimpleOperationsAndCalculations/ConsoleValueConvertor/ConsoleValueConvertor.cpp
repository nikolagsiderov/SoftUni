// ConsoleValueConvertor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	double value;
	string inputCurrency, outputCurrency;

	cin >> value >> inputCurrency >> outputCurrency;

	double result;

	if (inputCurrency == "BGN")
	{
		if (outputCurrency == "BGN")
		{
			result = value;
		}
		else if (outputCurrency == "USD")
		{
			result = value * 
		}
	}
	else if (inputCurrency == "USD")
	{

	}
	else if (inputCurrency == "EUR")
	{

	}
	else if (inputCurrency == "GBP")
	{

	}

    return 0;
}

