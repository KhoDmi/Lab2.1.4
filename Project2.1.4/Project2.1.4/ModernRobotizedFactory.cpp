#include<iostream>
#include<string>
#include<limits>
#include <iomanip>
#include"cmath";
#include "ModernRobotizedFactory.h"
#include "RobotizedFactory.h"
using namespace::std;

int intInpCheck();
int answerCheck();

ModernRobotizedFactory::ModernRobotizedFactory(int a, int b, int c) : RobotizedFactory(a,b)
{
	numofMRobots = c;
	mrobotDefectivePercentage = 0.01;
	countDef();
}

ModernRobotizedFactory::ModernRobotizedFactory()
{
	cout << "Input number of modern robots at this factory" << endl;
	numofMRobots = intInpCheck();
	mrobotDefectivePercentage = 0.01;
	countDef();
}

void ModernRobotizedFactory::countDef()
{
	defectivePercentage = (numofEmployees / (numofEmployees + numofRobots + numofRobots)) * humanDefectivePercentage + (numofRobots / (numofEmployees + numofRobots + numofRobots)) * robotDefectivePercentage + (numofMRobots / (numofEmployees + numofRobots + numofMRobots)) * mrobotDefectivePercentage;
}

void ModernRobotizedFactory::getFactory()
{
	cout << "Number of employees is " << numofEmployees << endl;
	cout << "Average salary is " << averageSalary << endl;
	cout << "Number of robots is " << numofRobots << endl;
	cout << "Number of modern robots is " << numofMRobots << endl;
	cout << "Defective percentage is " << defectivePercentage << endl;
}

ModernRobotizedFactory::~ModernRobotizedFactory()
{
	cout << "MRF is out. That's all folks!" << endl;
}