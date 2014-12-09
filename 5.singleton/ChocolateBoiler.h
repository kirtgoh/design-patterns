#ifndef _CHOCOLATE_BOILER_H_
#define _CHOCOLATE_BOILER_H_

#include <iostream>

using namespace std;

class ChocolateBoiler
{
private:
	bool empty;
	bool boiled;
	static ChocolateBoiler *uniqueInstance;

	ChocolateBoiler() {
		empty = true;
		boiled = false;
		cout << "Creating unique instance of Chocolate Boiler"<< endl;
	}

public:
	static ChocolateBoiler *getInstance() {
		if (uniqueInstance == NULL)
		{
			uniqueInstance = new ChocolateBoiler();
		}

		cout <<"Returning instance of Chocolate Boiler" <<endl;
		return uniqueInstance;
	}

	void fill() {
		if (isEmpty())
		{
			cout << "Filling .." << endl;
			empty = false;
		}
	}

	void boil() {
		if (!isEmpty() && !isBoiled())
		{
			cout << "Boiling .." <<endl;
			boiled = true;
		}
	}

	void drain()
	{
		if (!isEmpty() && isBoiled())
		{
			cout << "Draining .." <<endl;
			empty = true;
		}
	}

	bool isEmpty() {
		return empty;
	}

	bool isBoiled() {
		return boiled;
	}
};

ChocolateBoiler *ChocolateBoiler::uniqueInstance = NULL;

#endif /* _CHOCOLATE_BOILER_H_ */
