#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "sampleCard.h"
using namespace std;

class Player
{
	public:
		Player(string Name, int ID); // tested

		void setName(string newName); // tested
		string getName(); //tested

		void setID(int ID); //tested
		int getID(); //tested
	
		string checkTop();
		void displayHand(); //tested
		card playCard(string myCard); //tested
		void organizeHand();
		void pass();

	private:
		string name;
		int ID;
		vector<card> hand;
};

#endif
