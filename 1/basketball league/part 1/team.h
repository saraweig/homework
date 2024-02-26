#include "player.h"
#ifndef __TEAM_H
#define __TEAM_H

const int MAX_PLAYERS = 11;
class Team
{
public:
	void readTeam(Team& t);
	void printTeam(const Team& t);
	bool addPlayer(Team& t, const char* name = "player1", int birthYear = 1999);
	void initTeam(Team& t, const char* name = "maccabi");


private:
	char name[20];
	Player* allPlayers[MAX_PLAYERS];
	int numOfPlayers;
};

#endif __TEAM_H