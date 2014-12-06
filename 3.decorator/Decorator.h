#ifndef _DECORATOR_H_
#define _DECORATOR_H_

#include "Beverage.h"

using namespace std;

class CondimentDecorator : public Beverage
{
public:
	virtual string getDescription() = 0;
};

class Mocha: public CondimentDecorator
{
private:
	Beverage *beverage;

public:
	Mocha(Beverage *beverage) {
		this->beverage = beverage;
	}

	string getDescription() {
		return beverage->getDescription() + ", Mocha";
	}

	double cost() {
		return .20 + beverage->cost();
	}
};

class Whip: public CondimentDecorator 
{
private:
	Beverage *beverage;

public:
	Whip(Beverage *beverage) {
		this->beverage = beverage;
	}

	string getDescription() {
		return beverage->getDescription() + ", Whip";
	}

	double cost() {
		return .10 + beverage->cost();
	}
};

#endif /* _DECORATOR_H */
