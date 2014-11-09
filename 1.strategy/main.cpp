#include "MallardDuck.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	Duck *mallard = new MallardDuck();

	mallard->display();
	mallard->swim();
	mallard->performFly();
	mallard->performQuack();
	// change behavior
	mallard->setFlyBehavior(new FlyNoWay());
	mallard->performFly();

	return 0;
}
