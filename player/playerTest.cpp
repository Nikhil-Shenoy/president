#include <iostream>
#include <string>
#include <vector>
#include "player.h"

using namespace std;

int main()
{
	Player first("new player",1);

	first.setName("Nikhil Shenoy");
	cout << "First's new name is: " << first.getName() << endl;

	first.setID(2);
	cout << "First's new ID is: " << first.getID() << endl;
}
