#include<iostream>
#include<string>
#include<limits>
#include <iomanip>
#include"cmath";

#include "AsianChildLabourFactory.h"
#include "ModernRobotizedFactory.h"
#include"AppleFactory.h"
using namespace::std;


AppleFactory::AppleFactory() : ModernRobotizedFactory(), AsianChildLabourFactory()
{
	countDef();
}

void AppleFactory::countDef()
{
	defectivePercentage = (numofEmployees / (numofEmployees + numofChildren + numofAsianChildren + numofMRobots + numofRobots)) * humanDefectivePercentage + (numofChildren / (numofEmployees + numofChildren + numofAsianChildren + numofMRobots + numofRobots)) * childDefectivePercentage + (numofAsianChildren / (numofEmployees + numofChildren + numofMRobots + numofAsianChildren)) * achildDefectivePercentage+ (numofMRobots / (numofEmployees + numofRobots + numofMRobots+numofAsianChildren)) * mrobotDefectivePercentage;
}

void AppleFactory::getFactory()
{
	cout << "Number of employees is " << numofEmployees << endl;
	cout << "Average salary is " << averageSalary << endl;
	cout << "Number of robots is " << numofRobots << endl;
	cout << "Number of modern robots is " << numofMRobots << endl;
	cout << "Number of children is " << numofChildren << endl;
	cout << "Number of asian children is " << numofAsianChildren << endl;
	cout << "Defective percentage is " << defectivePercentage << endl;
}

AppleFactory::~AppleFactory()
{
	cout << "AF is out. That's all folks!" << endl;
}