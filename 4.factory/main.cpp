#include "Pizza.h"
#include "PizzaStore.h" 

int main(int argc, char *argv[])
{
	PizzaStore *nyStore = new NYStylePizzaStore();
	PizzaStore *ChicagoStore = new ChicagoStylePizzaStore();

	Pizza *pizza = nyStore->orderPizza("cheese");
	cout << "Ethan ordered a " + pizza->getName() << endl;

	cout << endl;

	pizza = ChicagoStore->orderPizza("cheese");
	cout << "Joel ordered a " + pizza->getName() << endl;

	return 0;
}
