#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "sampleCard.h"
using namespace std;

class Player
{
	public:
		Player(string Name, int ID); // trial

		void setName(string newName); // trial
		string getName(); //trial

		void setID(int ID); //trial
		int getID(); //trial
	
		string checkTop();
		void displayHand();
		void playCard(card myCard);	
		void organizeHand();
		void pass();

	private:
		string name;
		int ID;
		vector<card> hand;
};

#endif
