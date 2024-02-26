#include <iostream>
using namespace std;

#include "player.h"

void Player :: readPlayer()
{
	cout << "Enter player's name: ";
	cin >> name;

	cout << "Enter player's birth-year: ";
	cin >> birthYear;
}

void Player:: printPlayer()
{
	cout << "Name: " << name << ", birthYear: " << birthYear << endl;
}

char* Player::getName()
{
	return name;
}

void Player::setName(char* n)
{
	if (n != nullptr) {
		this-> name = n;
	}
}
