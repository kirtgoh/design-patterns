#ifndef _BEVERAGE_H_
#define _BEVERAGE_H_

#include <string>

using namespace std;

class Beverage
{
public:
	Beverage(string str = "Unknown Beverage") : description(str) {}

	virtual string getDescription() {
		return description;
	}

	virtual double cost() = 0;

private:
	string description;
};

class Espresso: public Beverage
{
public:
	Espresso(string str = "Espresso") : Beverage(str) {}

	double cost() {
		return 1.99;
	}
};

class HouseBlend : public Beverage
{
public:
	HouseBlend(string str = "HouseBlend") : Beverage(str) {}

	double cost() {
		return .89;
	}
};

class DarkRoast : public Beverage
{
public:
	DarkRoast(string str = "DarkRoast") : Beverage(str) {}

	double cost() {
		return .99;
	}
};

class Decaf: public Beverage
{
public:
	Decaf(string str = "Decaf") : Beverage(str) {}

	double cost() {
		return 1.05;
	}
};
#endif /* _BEVERAGE_H_ */
