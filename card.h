#ifndef CARD_H
#define CARD_H

using namespace std;

// 1 is Ace, King is 13
// 1 is Diamonds, 2 Clubs, 3 is Spades, 4 is Hearts

class card
{
	public:
		card(int face, int suit);

		int getFace();
		int getSuit();

		void display();
	private:
		int face;
		int suit;
};

#endif
