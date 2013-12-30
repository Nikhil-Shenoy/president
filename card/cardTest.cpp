#include <string>
#include <iostream>
#include <vector>
#include "card.h"
using namespace std;

int main()
{
	vector<card> deck;
	int deckCount = 0;
	for(int i = 1; i <= 4; i++)
	{
		for(int j = 1; j <= 13; j++)
		{
			card temp(j,i);
			deck.push_back(temp);
			deckCount++;
		}
	}	

	for(vector<card>::iterator it = deck.begin(); it != deck.end(); ++it)
	{
		it->display();	
	}	
}
