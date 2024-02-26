#include <iostream>
using namespace std;

#include "team.h"

struct League
{
	Team* allTeams;
	int  numOfTeams;
};

int main()
{
	int numOfTeams;
	cout << "How many teams in your league? ";
	cin >> numOfTeams;

	Team* allTeams = new Team[numOfTeams];

	initTeam(allTeams[0], "maccabi");
	addPlayer(allTeams[0], "gogo", 1999);
	addPlayer(allTeams[0], "momo", 1998);
	addPlayer(allTeams[0], "shosho");
	addPlayer(allTeams[0]);

	for (int i = 1; i < numOfTeams; i++)
	{
		readTeam(allTeams[i]);
	}

	cout << "All teams data:" << endl;
	for (int i = 0; i < numOfTeams; i++)
	{
		printTeam(allTeams[i]);
	}

	for (int i = 0; i < numOfTeams; i++)
	{
		for (int j = 0; j < allTeams[i].numOfPlayers; j++)
		{
			delete allTeams[i].allPlayers[j];
		}
	}
	delete[] allTeams;
}