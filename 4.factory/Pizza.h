#ifndef _PIZZA_H_
#define _PIZZA_H_

#include <string>
#include <iostream>
#include "IngredientFactory.h"

using namespace std;

class Pizza {
protected:
	string name;
	Dough dough;
	Sauce sauce;
	// Veggies veggies[];
	Cheese cheese;
	// Pepperoni pepperoni;
	// Clams clam;

public:

	virtual void prepare() = 0;

	virtual void bake() {
		cout << "Bake for 25 minutes at 350" << endl;
	}
	// Chicago is square
	virtual void cut() = 0;
		// cout << "Cutting the pizza into diagnoal slices" << endl;
		//
	virtual void box() {
		cout << "Place pizza in official PizzaStore box" << endl;
	}

	string getName() {
		return name;
	}

	void setName(string str) {
		name = str;
	}

};

class CheesePizza : public Pizza
{
private:
	IngredientFactory *ingredentFactory;

public:
	CheesePizza(IngredientFactory *ingredentFactory) {
		this->ingredentFactory = ingredentFactory;
	}

	void prepare() {
		cout << "Preparing " + name << endl;
		dough = ingredentFactory->createDough();
		sauce = ingredentFactory->createSauce();
		cheese = ingredentFactory->createCheese();
	}
	
	void cut()
	{
		ingredentFactory->cut();
	}
};

// class PepperoniPizza : public Pizza
// {
// public:
// 	PepperoniPizza() {
// 		dough = "Thin Crust Dough";
// 		sauce = "Marinara Sauce";
// 	}
//
// 	void cut() {
// 		cout << "Cutting the pizza into square slices" << endl;
// 	}
// };

#endif /* _PIZZA_H_ */
