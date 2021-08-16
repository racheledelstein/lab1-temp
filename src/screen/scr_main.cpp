// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	auto myInitial = Screen{6,6};

    myInitial.clear(' ');
    myInitial.set("******");
    myInitial.move(2,1);
    myInitial.set('*');
    myInitial.move(2,6);
    myInitial.set('*');
    myInitial.move(3,1);
    myInitial.set("******");
    myInitial.move(4,1);
    myInitial.set('*');
    myInitial.move(4,4);
    myInitial.set('*');
    myInitial.move(5,1);
    myInitial.set('*');
    myInitial.move(5,5);
    myInitial.set('*');
    myInitial.move(6,1);
    myInitial.set('*');
    myInitial.move(6,6);
    myInitial.set('*');
    myInitial.display();
    cout << endl;

	return 0;
}

