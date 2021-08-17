// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{

	/*
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
*/

    //move() method test
    //Exercise 4.3
    // This member function is not entirely necessary as the functionalities enabled through this
    // member function already do exist through other member functions. The advantage of this
    // member function is ease of accessibility through enumeration which provides an easy and
    // efficient way for the client to navigate the code.
    auto myScreen = Screen{6,6};

    myScreen.move(Screen::Direction::DOWN);
    myScreen.set('D');
    myScreen.move(Screen::Direction::FORWARD);
    myScreen.set('R');
    myScreen.move(Screen::Direction::UP);
    myScreen.set('U');
    myScreen.move(Screen::Direction::BACK);
    myScreen.set('L');
    myScreen.move(Screen::Direction::END);
    myScreen.set('E');
    myScreen.move(Screen::Direction::HOME);
    myScreen.set('H');
    myScreen.display();
    cout << endl;


	return 0;
}

