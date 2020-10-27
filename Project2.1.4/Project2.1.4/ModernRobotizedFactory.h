#include<string>
#include<limits>
#ifndef MODERNROBOTIZEDFAC_H
#define MODERNROBOTIZEDFAC_H

using std::string;

#include "RobotizedFactory.h"

class ModernRobotizedFactory : virtual public RobotizedFactory
{
public:
	virtual void countDef();
	ModernRobotizedFactory(int a, int b, int c);
	ModernRobotizedFactory();
	void getFactory();
	~ModernRobotizedFactory();
protected:
	double numofMRobots;
	double mrobotDefectivePercentage;
};

#endif MODERNROBOTIZEDFAC_H
