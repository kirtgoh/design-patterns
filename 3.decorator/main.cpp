#include <memory>
#include <iostream>
#include "Decorator.h"
#include "Beverage.h"

using namespace std;

int main(int argc, char *argv[])
{
	Beverage *beverage = new Espresso();
	cout << beverage->getDescription() << " $" << beverage->cost() << endl;

	Beverage *beverage2 = new DarkRoast();
	beverage2 = new Mocha(beverage2);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Whip(beverage2);
	cout << beverage2->getDescription() << " $" << beverage2->cost() << endl;

	return 0;
}
