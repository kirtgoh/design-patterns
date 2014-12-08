#ifndef _INGREDIENT_FACTORY_H
#define _INGREDIENT_FACTORY_H

#include <string>
#include <iostream>

using namespace std;

typedef string Dough, Sauce, Cheese;

class IngredientFactory {
protected:
	Dough dough;
	Sauce sauce;
	Cheese cheese;

public:
	Dough createDough() { return dough;}
	Sauce createSauce() { return sauce;}
	Cheese createCheese() { return cheese;}

	virtual void cut() = 0;

};

class NYIngredientFactory : public IngredientFactory {
public:
	NYIngredientFactory() {
		dough = "Thin Crust Dough";
		sauce = "Marinara Sauce";
		cheese = "NY cheese";
	}
	void cut() 
	{
		cout<< "Cutting the pizza into diagnoal slices" << endl;
	}
};

class ChicagoIngredientFactory : public IngredientFactory {
public:
	ChicagoIngredientFactory() {
		dough = "Extra Thick Crust Dough";
		sauce = "Plum Tomato Sauce";
		cheese = "Chicago cheese";
	}

	void cut() 
	{
		cout<< "Cutting the pizza into square slices" << endl;
	}
};

#endif /* _INGREDIENT_FACTORY_H */
