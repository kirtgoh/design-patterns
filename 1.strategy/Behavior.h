#ifndef BEHAVIOR_H
#define BEHAVIOR_H

#include <iostream>

using namespace std;

// Fly Behavior interface
class FlyBehavior
{
public:
	virtual void fly() = 0;
};

// Quack Behavior interface
class QuackBehavior {
public:
	virtual void quack() = 0;

};


// Interface Algorithms
//
// - Fly Behavior
class FlyWithWings : public FlyBehavior
{
public:
	void fly() {
		cout << "I can fly..." << endl;
	}
};

class FlyNoWay: public FlyBehavior
{
public:
	void fly() {
		cout << "I can't fly.." << endl;
	}
};

// - Quack Behavior
class Quack : public QuackBehavior
{
public:
	void quack() {
		cout << "Quaaaack!..." << endl;
	}
};

class MuteQuack : public QuackBehavior
{
public:
	void quack() {
		cout << "I can't quack..." << endl;
	}
};

#endif /* BEHAVIOR_H */
