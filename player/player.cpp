#include <iostream>
#include <string>
#include <vector>
#include "sampleCard.h"
#include "player.h"
using namespace std;

Player::Player(string Name, int ID)
{
	setName(Name);
	setID(ID);
	cout << getName() << " created with ID: " << getID() << endl;
}

void Player::setName(string newName)
{
	name = newName;
}

string Player::getName()
{
	return name;
}

void Player::setID(int myID)
{
	ID = myID;
}

int Player::getID()
{
	return ID;
}

