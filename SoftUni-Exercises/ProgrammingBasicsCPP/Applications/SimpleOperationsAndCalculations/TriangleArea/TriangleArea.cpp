// TriangleArea.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	double a, h;

	cin >> a >> h;

	double area = a * h / 2;

	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	std::cout << area << endl;

    return 0;
}

