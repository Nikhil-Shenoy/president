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

	card myCard(1,4);
	card myCard2(8,2);
	card myCard3(10,3);
	card myCard4(13,1);
	card myCard5(1,1);

	hand.push_back(myCard);	
	hand.push_back(myCard2);
	hand.push_back(myCard3);
	hand.push_back(myCard4);
	hand.push_back(myCard5);
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

void Player::displayHand()
{
	cout << "Your hand contains: " << "\n\n";
	
	for(int i = 0; i < hand.size(); i++)
	{
		hand[i].display();
		cout << endl;	
	}

	cout << endl;

}

card Player::playCard(string myCard)
{
	bool match = false;
	int i = 0;

	while((i < hand.size()) && (match == false))
	{
		string cardData = hand[i].stringConvert();
	
		if(myCard == cardData)
			match = true;
	
		i++;
	}

	if(match == false)
		cout << "That card is not in your hand."; // handle the error
	else
	{
		card back(1,1);
		back = hand[i-1];
		return back;
	}
}




















































