#include <iostream>
#include "player.h"
#include "sampleCard.h"
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
			cout << "ace of ";
			break;
		case 2:
			cout << "two of ";
			break;
		case 3:
			cout << "three of ";
			break;
		case 4:
			cout << "four of ";
			break;
		case 5:
			cout << "five of ";
			break;
		case 6:
			cout << "six of ";
			break;
		case 7:
			cout << "seven of ";
			break;
		case 8:
			cout << "eight of ";
			break;
		case 9:
			cout << "nine of ";
			break;
		case 10:
			cout << "ten of ";
			break;
		case 11:
			cout << "jack of ";
			break;
		case 12:
			cout << "queen of ";
			break;
		case 13:
			cout << "king of ";
			break;
	}


	switch (suit)
	{
		case 1:
			cout << "diamonds";
			break;
		case 2:
			cout << "clubs ";
			break;
		case 3:
			cout << "spades ";
			break;
		case 4: 
			cout << "hearts ";
			break;
	}
}

string card::stringConvert()
{
	string converted("");

	switch(face)
	{
		case 1:
			converted.append("ace of ");
			break;
		case 2:
			converted.append("two of ");
			break;
		case 3:
			converted.append("three of ");
			break;
		case 4:
			converted.append("four of ");
			break;
		case 5:
			converted.append("five of ");
			break;
		case 6:
			converted.append("six of ");
			break;
		case 7:
			converted.append("seven of ");
			break;
		case 8:
			converted.append("eight of ");
			break;
		case 9:
			converted.append("nine of ");
			break;
		case 10:
			converted.append("ten of ");
			break;
		case 11:
			converted.append("jack of ");
			break;
		case 12:
			converted.append("queen of ");
			break;
		case 13:
			converted.append("king of ");
			break;
	}

	switch(suit)
	{
		case 1:
			converted.append("diamonds");
			break;
		case 2:
			converted.append("clubs");
			break;
		case 3:
			converted.append("spades");
			break;
		case 4: 
			converted.append("hearts");
			break;
	}

	return converted;
}	
