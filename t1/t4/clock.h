#ifndef __CLOCK_H
#define __CLOCK_H

class Clock
{
public:
	enum eDisplayType {FULL_DAY, HALF_DAY };
	eDisplayType getDisplayType();
	void setDisplayType(eDisplayType type);
	bool setMin(int m);
	bool setHours(int h);
	void show(); 
	void tick();
	void addMin(int add);

private:
	int hours, min;
	eDisplayType displayType; 
};

#endif __CLOCK_H