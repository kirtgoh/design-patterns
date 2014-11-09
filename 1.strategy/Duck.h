#ifndef DUCK_H
#define DUCK_H

#include "Behavior.h"
#include <iostream>

using namespace std;

class Duck
{
protected:
	// behavior is wrapped into different interfaces
	// different ducks have different behavior
	FlyBehavior *flyBehavior;
	QuackBehavior *quackBehavior;

public:
	/* common behavior */
	void swim() {
		cout << "All ducks float, even decoys..." << endl;
	}

	/* all ducks need to implement their own display() method */
	virtual void display() {
		cout << "All ducks have colors..." << endl;
	}

	/* behavior implementation */
	void performQuack() { quackBehavior->quack(); }
	void performFly() { flyBehavior->fly(); }

	/* can change behavior runtime */
	void setFlyBehavior(FlyBehavior *flyBehavior) {
		this->flyBehavior = flyBehavior;
	}

	void setQuackBehavior(QuackBehavior *quackBehavior) {
		this->quackBehavior = quackBehavior;
	}
};

#endif /* DUCK_H */
