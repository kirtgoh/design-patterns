#include "Subject.h"
#include "Observer.h"

void WeatherData::registerObserver(shared_ptr<Observer> o)
{
	this->observers.push_back(o);
}

void WeatherData::removeObserver(shared_ptr<Observer> o)
{
	for(list<shared_ptr<Observer> >::iterator it = observers.begin(); it != observers.end(); ++it)
	{
		if (*it == o)
			observers.erase(it);
	}
}

void WeatherData::notify()
{
	if (change == true)
	{
		for(list<shared_ptr<Observer> >::iterator it = observers.begin(); it != observers.end(); ++it)
		{
			(*it)->update(temperature, humidity, pressure);
		}
		change = false;
	}
}

void WeatherData::setTemperature(float tem) { this->temperature = tem; }
void WeatherData::setHumidity(float hum) { this->humidity = hum; }
void WeatherData::setPressure(float pre) { this->pressure = pre; }
void WeatherData::setChange() { this->change = true; }
void WeatherData::setMeasureChange(float tem, float hum, float pre)
{
	this->humidity = hum;
	this->pressure = pre;
	this->temperature = tem;
	this->setChange();
	this->notify();
}

float WeatherData::getTemperature() { return this->temperature; }
float WeatherData::getHumidity() { return this->humidity; }
float WeatherData::getPressure() { return this->pressure;}

void WeatherData::clearState() { this->change = false; }

