#include <string>
#include <stack>
#include "card.h"
using namespace std;

class Pile
{
	public:
		Pile();

		card getTop();
		void clear();

	private:
		stack<card> thePile;
};
