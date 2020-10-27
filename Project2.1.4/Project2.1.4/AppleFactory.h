#include<string>
#include<limits>
#ifndef APPLEFACTORY_H
#define APPLEFACTORY_H

using std::string;

#include "AsianChildLabourFactory.h"
#include "ModernRobotizedFactory.h"


class AppleFactory : virtual public AsianChildLabourFactory, virtual public ModernRobotizedFactory
{
public:
	virtual void countDef();
	AppleFactory();
	void getFactory();
	~AppleFactory();
};

#endif APPLEFACTORY_H
