#include<iostream>
#include<string>
#include<limits>
#include <iomanip>
#include"cmath";
#include "AsianChildLabourFactory.h"
#include "ChildLabourFactory.h"
using namespace::std;

int intInpCheck();
int answerCheck();

AsianChildLabourFactory::AsianChildLabourFactory(int a, int b, int c) : ChildLabourFactory(a, b)
{
	numofAsianChildren = c;
	achildDefectivePercentage = 0.1;
	countDef();
}

AsianChildLabourFactory::AsianChildLabourFactory()
{

	cout << "Input number of asian children at this factory" << endl;
	numofAsianChildren = intInpCheck();
	achildDefectivePercentage = 0.1;
	countDef();
}

void AsianChildLabourFactory::countDef()
{
	defectivePercentage = (numofEmployees / (numofEmployees + numofChildren + numofAsianChildren)) * humanDefectivePercentage + (numofChildren / (numofEmployees + numofChildren + numofAsianChildren)) * childDefectivePercentage + (numofAsianChildren / (numofEmployees + numofChildren + numofAsianChildren)) * achildDefectivePercentage;
}

void AsianChildLabourFactory::getFactory()
{
	cout << "Number of employees is " << numofEmployees << endl;
	cout << "Average salary is " << averageSalary << endl;
	cout << "Number of children is " << numofChildren << endl;
	cout << "Number of asian children is " << numofAsianChildren << endl;
	cout << "Defective percentage is " << defectivePercentage << endl;
}

AsianChildLabourFactory::~AsianChildLabourFactory()
{
	cout << "ACLF is out. That's all folks!" << endl;
}