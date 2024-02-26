
#ifndef __OVEN_H
#define __OVEN_H
#include "clock.h"
class Oven
{
private:
	int temperature;
	Clock startTime;
	int minutesToWork;
public:
	void show();
	int getTemperature();
	Clock getStartTime();
	int getMinutesToWork();
	void setTemperature(int t);
	void setStarTime(Clock c);
	void setMinutesToWork(int t);
};
#endif // __OVEN_H