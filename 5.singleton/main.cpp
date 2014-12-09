#include "ChocolateBoiler.h"

int main(int argc, char *argv[])
{
	ChocolateBoiler *boiler = ChocolateBoiler::getInstance();

	boiler->fill();
	boiler->boil();
	boiler->drain();

	ChocolateBoiler *boiler2 = ChocolateBoiler::getInstance();

	if (boiler == boiler2) {
		cout << "Got the same instance" << endl;
	} else {
		cout << "Got different instance" << endl;
	}

	return 0;
}
