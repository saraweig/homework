#pragma warning(disable: 4996)

#include <iostream>
using namespace std;

#include "team.h"


void Team :: readTeam(Team& t)
{
	cout << "Enter team's name: ";
	cin >> t.name;

	for (t.numOfPlayers = 0; t.numOfPlayers < MAX_PLAYERS; t.numOfPlayers++)
	{
		cout << "Would you like to add another player to the team? ";
		char answer;
		cin >> answer;

		if (answer == 'n' || answer == 'N')
		{
			break;
		}
		else // answer == 'y'
		{
			t.allPlayers[t.numOfPlayers] = new Player;
			readPlayer(*t.allPlayers[t.numOfPlayers]);
		}
	}
	cout << endl;
}

void Team:: printTeam(const Team& t)
{
	cout << "The team " << t.name << " has " << t.numOfPlayers << " players:" << endl;
	for (int i = 0; i < t.numOfPlayers; i++)
	{
		cout << "\t" << (i + 1) << ") ";
		printPlayer(*t.allPlayers[i]);
	}
}

bool Team:: addPlayer(Team& t, const char* name, int birthYear)
{
	if (t.numOfPlayers == MAX_PLAYERS)
		return false;

	t.allPlayers[t.numOfPlayers] = new Player;
	strcpy(t.allPlayers[t.numOfPlayers]->name, name);
	t.allPlayers[t.numOfPlayers]->birthYear = birthYear;

	t.numOfPlayers++;
	return true;
}

void Team:: initTeam(Team& t, const char* name)
{
	strcpy(t.name, name);
	t.numOfPlayers = 0;
}