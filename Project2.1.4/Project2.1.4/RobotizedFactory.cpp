#include<iostream>
#include<string>
#include<limits>
#include <iomanip>
#include"cmath";
#include "RobotizedFactory.h"
#include"Factory.h"
using namespace::std;

int intInpCheck();
int answerCheck();

RobotizedFactory::RobotizedFactory(int a, int b) : Factory (a)
{
	numofRobots = b;
	robotDefectivePercentage=0.05;
	countDef();
}

RobotizedFactory::RobotizedFactory(int b)
{
	numofRobots = b;
	robotDefectivePercentage = 0.01;
	countDef();
}

RobotizedFactory::RobotizedFactory()
{
	cout << "Input number of robots at this factory" << endl;
	numofRobots = intInpCheck();
	robotDefectivePercentage = 0.01;
	countDef();
}

void RobotizedFactory::countDef()
{
	defectivePercentage = (numofEmployees / (numofEmployees + numofRobots)) * humanDefectivePercentage + (numofRobots / (numofEmployees + numofRobots)) * robotDefectivePercentage;
}

void RobotizedFactory::getFactory()
{
	cout << "Number of employees is " << numofEmployees << endl;
	cout << "Average salary is " << averageSalary << endl;
	cout << "Number of robots is " << numofRobots << endl;
	cout << "Defective percentage is " << defectivePercentage << endl;
}

RobotizedFactory::~RobotizedFactory()
{
	cout << "RF is out. That's all folks!" << endl;
}