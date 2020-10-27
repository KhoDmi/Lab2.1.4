#include<string>
#include<limits>
#ifndef ROBOTIZEDFAC_H
#define ROBOTIZEDFAC_H

using std::string;

#include "Factory.h"

class RobotizedFactory : virtual public Factory
{
public:
	virtual void countDef();
	RobotizedFactory(int a,int b);
	RobotizedFactory(int b);
	RobotizedFactory();
	void getFactory();
	~RobotizedFactory();
protected:
	double numofRobots;
	double robotDefectivePercentage;
};

#endif ROBOTIZEDFAC_H
