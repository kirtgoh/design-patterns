#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <list>
#include <iostream>
#include <memory>
#include "Subject.h"

using namespace std;

// Observer interface definition 
class Observer : public enable_shared_from_this<Observer> {
public:
	// when subject change, observers need to update status
	virtual void update(float temperature, float humidity, float pressure) = 0;
	virtual void display() = 0;

	// *NOTE*: If using constructor to regist subject, throwed an instance of 'std::bad_weak_ptr'	
	// Common function
	void Regist(shared_ptr<Subject> sub)
	{
		this->subject = sub;
		this->subject->registerObserver(shared_from_this()); // convert Observer * to shared_ptr<Observer>
	}

protected:
	shared_ptr<Subject> subject;
};

// Concrete observer
class CurrentConditionDisplay : public Observer
{
private:
	// not need pressure
	float temperature;
	float humidity;

public:
	virtual void update(float temperature, float humidity, float pressure);
	virtual void display();
};

#endif /* _OBSERVER_H_ */
