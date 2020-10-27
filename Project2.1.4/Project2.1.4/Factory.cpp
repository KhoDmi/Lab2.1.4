#include<iostream>
#include<string>
#include<limits>
#include <iomanip>
#include"cmath";

#include"Factory.h"
using namespace::std;

int intInpCheck();
double doubleInpCheck();
int answerCheck();

Factory::Factory(int a)
{
	averageSalary = 0;
	numofEmployees = a;
	salary = new double[numofEmployees];
	cout << "input salaries" << endl;
	for (int count = 0; count < numofEmployees; count++)
		salary[count] = doubleInpCheck();
	average();
	humanDefectivePercentage = 0.1;
	defectivePercentage = humanDefectivePercentage;
}

Factory::Factory()
{
	cout << "Input number of employees at this factory" << endl;
	int a = intInpCheck();
	averageSalary = 0;
	numofEmployees = a;
	salary = new double[numofEmployees];
	cout << "input salaries" << endl;
	for (int count = 0; count < numofEmployees; count++)
		salary[count] = doubleInpCheck();
	average();
	humanDefectivePercentage = 0.1;
	defectivePercentage = humanDefectivePercentage;
}

void Factory::average()
{
	for (int count = 0; count < numofEmployees; count++)
		averageSalary += salary[count];
	averageSalary /= numofEmployees;
}

void Factory::setFactory()
{
	cout << "Do you want to change information about employees?" << endl;
	int check = answerCheck();
	numofEmployees = doubleInpCheck();
	cout << "input salaries" << endl;
	for (int count = 0; count < numofEmployees; count++)
		salary[count] = doubleInpCheck();
}






Factory::~Factory()
{
	cout << "F is out. That's all folks!" << endl;
}
