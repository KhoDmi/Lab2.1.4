#include<iostream>
#include<string>
#include<limits>
#include <iomanip>
#include"cmath";
#include "ChildLabourFactory.h"
#include"Factory.h"
using namespace::std;

int intInpCheck();
int answerCheck();

ChildLabourFactory::ChildLabourFactory(int a, int b) : Factory(a)
{
	
	numofChildren = b;
	childDefectivePercentage = 0.3;
	countDef();
}

ChildLabourFactory::ChildLabourFactory(int b)
{

	numofChildren = b;
	childDefectivePercentage = 0.3;
	countDef();
}

ChildLabourFactory::ChildLabourFactory()
{
	cout << "Input number of children at this factory" << endl;
	numofChildren = intInpCheck();
	childDefectivePercentage = 0.3;
	countDef();
}

void ChildLabourFactory::countDef()
{
	defectivePercentage = (numofEmployees / (numofEmployees + numofChildren)) * humanDefectivePercentage + (numofChildren / (numofEmployees + numofChildren)) * childDefectivePercentage;
}

void ChildLabourFactory::getFactory()
{
	cout << "Number of employees is " << numofEmployees << endl;
	cout << "Average salary is " << averageSalary << endl;
	cout << "Number of children is " << numofChildren << endl;
	cout << "Defective percentage is " << defectivePercentage << endl;
}

ChildLabourFactory::~ChildLabourFactory()
{
	cout << "CLF is out. That's all folks!" << endl;
}