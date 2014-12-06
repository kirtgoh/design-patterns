#include "Subject.h"
#include "Observer.h"
#include <memory>

int main(int argc, char *argv[])
{
	// Subject
	shared_ptr<WeatherData> weatherData (new WeatherData);
    
	// Observer
	shared_ptr<Observer> observer1 (new CurrentConditionDisplay);

	// Observer regist
	observer1->Regist(weatherData);

	weatherData->setMeasureChange(80,65,30.4f);
	weatherData->setMeasureChange(82,70,29.2f);
	weatherData->setMeasureChange(78,90,29.2f);

	return 0;
}
