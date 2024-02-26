#ifndef __PLAYER_H
#define __PLAYER_H

class Player
{
public:
	void readPlayer();
	void printPlayer();
	char* getName();
	void setName(char* n);
private:
	char name[20];
	int birthYear;
};

#endif __PLAYER_H