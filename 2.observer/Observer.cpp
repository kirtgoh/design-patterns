#include "Observer.h"

void CurrentConditionDisplay::update(float temperature, float humidity, float pressure)
{
	this->temperature = temperature;
	this->humidity = humidity;
	this->display();
}

void CurrentConditionDisplay::display()
{
	cout << "Current Temperature is :" << this->temperature << endl;
	cout << "Current Humidity is:" << this->humidity << endl;
}
