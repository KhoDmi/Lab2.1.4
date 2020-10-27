#include<string>
#include<limits>
#ifndef ASIANCHILDLABOURFAC_H
#define ASIANCHILDLABOURFAC_H

using std::string;

#include "ChildLabourFactory.h"

class AsianChildLabourFactory : virtual public ChildLabourFactory
{
public:
	virtual void countDef();
	AsianChildLabourFactory(int a, int b, int c);
	AsianChildLabourFactory();
	void getFactory();
	~AsianChildLabourFactory();
protected:
	double numofAsianChildren;
	double achildDefectivePercentage;
};

#endif ASIANCHILDLABOURFAC_H
