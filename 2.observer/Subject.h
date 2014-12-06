#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <vector>
#include <memory>
#include <list>

using namespace std;

class Observer;

// Subject interface definition
class Subject
{
public:
	virtual void registerObserver(shared_ptr<Observer> o) = 0;
	virtual void removeObserver(shared_ptr<Observer> o) = 0;

protected:
	list< shared_ptr<Observer> > observers;
};

// Concrete subject
class WeatherData : public Subject
{
private:
	float temperature;
	float humidity;
	float pressure;
	bool change;
	list< shared_ptr<Observer > > observersList;

public:
	// Interface 
	virtual void registerObserver(shared_ptr<Observer> o);
	virtual void removeObserver(shared_ptr<Observer> o);
	virtual void notify(); // when data changed, need to notify observers

	// Weather board related
	void setTemperature(float tem);
	void setHumidity(float hum);
	void setPressure(float pre);
	void setChange();
	void setMeasureChange(float tem, float hum, float pre);

	float getTemperature();
	float getHumidity();
	float getPressure();

	void clearState();
};

#endif /* _SUBJECT_H_ */
