#ifndef _PIZZA_STORE_H_
#define _PIZZA_STORE_H_

#include "Pizza.h"
#include "IngredientFactory.h"

class PizzaStore {
public:
	virtual Pizza *createPizza(string type) = 0;

	Pizza* orderPizza(string type)
	{
		Pizza *pizza;

		pizza = createPizza(type);

		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();

		return pizza;
	}
};

class NYStylePizzaStore : public PizzaStore {
public:
	Pizza *createPizza(string type)
	{
		NYIngredientFactory *ingredientFactory = new NYIngredientFactory();

		Pizza *pizza = NULL;
		if (type == "cheese") {
			pizza = new CheesePizza(ingredientFactory);
			pizza->setName("NY Style Chesse Pizza");
		}

		return pizza;
	}

};

class ChicagoStylePizzaStore: public PizzaStore {
public:
	Pizza* createPizza(string type)
	{
		ChicagoIngredientFactory *ingredientFactory = new ChicagoIngredientFactory();
		Pizza *pizza = NULL;

		if (type == "cheese") {
			pizza = new CheesePizza(ingredientFactory);
			pizza->setName("Chicago Style Chesse Pizza");
		}

		return pizza;
	}

};


#endif /* _PIZZA_STORE_H_ */
