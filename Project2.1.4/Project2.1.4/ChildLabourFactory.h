#include<string>
#include<limits>
#ifndef CHILDLABOURFAC_H
#define CHILDLABOURFAC_H

using std::string;

#include "Factory.h"

class ChildLabourFactory : virtual public Factory
{
public:
	virtual void countDef();
	ChildLabourFactory(int a, int b);
	ChildLabourFactory(int b);
	ChildLabourFactory();
	void getFactory();
	~ChildLabourFactory();
protected:
	double numofChildren;
	double childDefectivePercentage;
};

#endif CHILDLABOURFAC_H
