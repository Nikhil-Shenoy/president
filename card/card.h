#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;

// 1 is Ace, King is 13
// 1 is Diamonds, 2 Clubs, 3 is Spades, 4 is Hearts

class card
{
	public:
		card(int Face, int Suit);

		int getFace();
		int getSuit();
		string stringConvert();
		void display();
	private:
		int face;
		int suit;
};

#endif
