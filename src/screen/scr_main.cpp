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

    /*
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
    */

    // Exercise 4.4
    /*
    auto wrapAround = Screen{6,6};
    wrapAround.move(6,3);
    wrapAround.down();
    wrapAround.set('d');
    wrapAround.forward();
    wrapAround.forward();
    wrapAround.up();
    wrapAround.set('u');
    wrapAround.down();
    wrapAround.set('d');
    wrapAround.forward();
    wrapAround.up();
    wrapAround.set('u');
    wrapAround.display();
    cout << endl;
    */

    //Exercise 4.5
    // One could simply use the existing interface without needing to create this member function. Here, in scr_main,
    // one could use the same functionalities such as set(), move() and the relative movement functions such as up()
    // and down() to draw the square. The function is an efficient way for the client to draw the square without getting
    // into the detail of member functions.

    //This function is not a totally necessary ability of a Screen object as it is possible to implement this
    // funciton without explicitly creating a function. In other words, it is possible to implement this without creating
    // a member function specifically for this use.

    auto mySquare = Screen{8,8};
    mySquare.drawSquare(3,3,6);
    cout << endl;
    auto mySquare2 = Screen{8,8};
    mySquare2.drawSquare(2,2,4);
    cout << endl;
	return 0;

	//Exercise 4.6
	// A better, more intuitive internal representation of the Screen class would be to use a 2D vector. This is more suited as
	// it is dynamic so the Screen size does not need to be specified. Furthermore, a 2D vector is more intuitive as it can be thought
	// of as a screen more easily than strings.
}

