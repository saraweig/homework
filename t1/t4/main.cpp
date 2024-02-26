// t4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include "clock.h"

int main()
{
	Clock c;
	c.setHours(22);
	c.setMin(30);
	c.setDisplayType(Clock::FULL_DAY);
	cout << "The time is (full day): ";
	c.show();
	cout << endl;
	c.setDisplayType(Clock::HALF_DAY);
	cout << "The time is (half day): ";
	c.show();
	cout << endl;

}