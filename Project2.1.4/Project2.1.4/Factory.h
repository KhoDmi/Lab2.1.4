#include<string>
#include<limits>
#ifndef FACTORY_H
#define FACTORY_H

using std::string;

class Factory
{
public:
	friend int intInpCheck();
	friend double doubleInpCheck();
	friend int answerCheck();

	Factory();

	Factory(int a);

	virtual void countDef()=0;
	void average();
	void setFactory();
	virtual void getFactory()=0;
	virtual ~Factory();
protected:
	double numofEmployees;
	double* salary;
	double averageSalary;
	double humanDefectivePercentage;
	double defectivePercentage;
};

#endif FACTORY_H
