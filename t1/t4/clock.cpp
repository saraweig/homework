#include <iostream>
using namespace std;

#include "clock.h"

bool Clock::setMin(int m)
{
	if (m < 0 || m >= 60)
	{
		cout << "min have to be between 0-59";
		return false;
	}
	else
	{
		min = m;
		return true;
	}
}
bool Clock::setHours(int h)
{
	if (h < 0 || h >= 24)
	{
		cout << "min have to be between 0-23";
		return false;
	}
	else
	{
		hours = h;
		return true;
	}
}

void Clock::show()
{
	int h = hours;
	if (displayType == HALF_DAY)
		h %= 12;
	cout << (h < 10 ? "0" : "")
		<< h << ":"
		<< (min < 10 ? "0" : "")
		<< min;
	if (displayType == HALF_DAY)
		cout << (hours < 12 ? "am" : "pm");
}
void Clock::tick()
{
	addMin(1);
}
void Clock::addMin(int add)
{
	min += add;
	hours += min / 60;
	min %= 60;
	hours %= 24; 
}

void Clock::setDisplayType(eDisplayType type)
{
	displayType = type;
}

