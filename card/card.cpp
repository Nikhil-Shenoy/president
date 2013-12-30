#include <iostream>

#include "card.h"
using namespace std;

card::card(int Face, int Suit)
{
	face = Face;
	suit = Suit;
}

int card::getFace()
{
	return face;
}

int card::getSuit()
{
	return suit;
}

void card::display()
{
	switch(face)
	{
		case 1:
			cout << "Ace of ";
			break;
		case 2:
			cout << "Two of ";
			break;
		case 3:
			cout << "Three of ";
			break;
		case 4:
			cout << "Four of ";
			break;
		case 5:
			cout << "Five of ";
			break;
		case 6:
			cout << "Six of ";
			break;
		case 7:
			cout << "Seven of ";
			break;
		case 8:
			cout << "Eight of ";
			break;
		case 9:
			cout << "Nine of ";
			break;
		case 10:
			cout << "Ten of ";
			break;
		case 11:
			cout << "Jack of ";
			break;
		case 12:
			cout << "Queen of ";
			break;
		case 13:
			cout << "King of ";
			break;
	}


	switch (suit)
	{
		cout << "HEREEEEEEEEEEEE" << endl;
		case 1:
			cout << "Diamonds " << endl;
			break;
		case 2:
			cout << "Clubs " << endl;
			break;
		case 3:
			cout << "Spades " << endl;
			break;
		case 4: 
			cout << "Hearts " << endl;
			break;
	}

	
}


	
