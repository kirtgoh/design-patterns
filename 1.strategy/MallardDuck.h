#include "Duck.h"
#include "Behavior.h"

// An example duck
class MallardDuck : public Duck
{
public:
	MallardDuck() {
		// Quack and Fly
		quackBehavior = new Quack();
		flyBehavior = new FlyWithWings();
	}

	void display() {
		cout << "I am a Mallard duck..." << endl;
	}
};

