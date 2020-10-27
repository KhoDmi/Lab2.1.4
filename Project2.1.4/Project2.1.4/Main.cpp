#include<stdlib.h>;      
#include<iostream>;
#include <limits>;
#include"cmath";

using namespace std;
#include "ChildLabourFactory.h"
#include "RobotizedFactory.h"
#include "AsianChildLabourFactory.h"
#include "ModernRobotizedFactory.h"
#include"Factory.h"
#include"AppleFactory.h"

int intInpCheck()
{
	string num;
	cin >> num;
	int i = 0, finalnum = 0, negativCheck = 0, doubleCheck = 0, point = 0;
	double finalnumd = 0.0;
	if (num[0] == '-')
	{
		negativCheck = 1;
		i++;
	}
	while (num[i])
	{
		if (int(num[i]) >= 48 && int(num[i]) <= 57)
			finalnum = finalnum * 10 + int(num[i] - 48);
		if ((num[i] == '.') && (doubleCheck == 0) && (i>0))
		{
			finalnumd = finalnum;
			point = i;
			doubleCheck = 1;
		}
		if (!(int(num[i]) >= 48 && int(num[i]) <= 57) && !((num[i] == '.') && ((doubleCheck == 0) || (doubleCheck == 1)) && (i > 0)))
		{
			cout << "Wrong input, try again\n";
			return intInpCheck();
		}
		i++;
	}
	if (doubleCheck == 1)
	{
		cout << "Wrong input, try again\n";
		return intInpCheck();
	}
	if (doubleCheck == 0)
	{
		if (negativCheck == 1)
			return -finalnum;
		return finalnum;
	}
}

double doubleInpCheck()
{
	string num;
	cin >> num;
	int i = 0, finalnum = 0, negativCheck = 0, doubleCheck = 0, point = 0;
	double finalnumd = 0.0;
	if (num[0] == '-')
	{
		negativCheck = 1;
		i++;
	}
	while (num[i])
	{
		if (int(num[i]) >= 48 && int(num[i]) <= 57)
			finalnum = finalnum * 10 + int(num[i] - 48);
		if ((num[i] == '.') && (doubleCheck == 0) && (i > 0))
		{
			finalnumd = finalnum;
			point = i;
			doubleCheck = 1;
		}
		if (!(int(num[i]) >= 48 && int(num[i]) <= 57) && !((num[i] == '.') && ((doubleCheck == 0) || (doubleCheck == 1)) && (i > 0)))
		{
			cout << "Wrong input, try again\n";
			return doubleInpCheck();
		}
		i++;
	}
	if (doubleCheck == 1)
	{
		finalnum -= (i - point) * finalnumd;
		finalnumd = finalnumd * pow(10, (i - point)) + finalnum;
		if (negativCheck == 1)
			return -finalnumd;
		return finalnumd;
	}
	if (doubleCheck == 0)
	{
		finalnumd = finalnum;
		if (negativCheck == 1)
			return -finalnumd;
		return finalnumd;
	}
}


int answerCheck()
{
	int check = 0;
	do
	{
		cout << "Input your answer (y or n)"<< endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		char answer = getchar();
		if (answer == 'y') check = 1;
		if (answer == 'n') check = -1;
	} while (check == 0);
	return check;
}

int main()
{
	cout << "Input number of factories" << endl;
	int numofF = intInpCheck();
	Factory** arr = new Factory * [numofF];
	for (int count = 0; count < numofF; count++)
	{
		int choice = 0;
		while ((choice != 1) && (choice != 2) && (choice != 3) && (choice != 4) && (choice != 5))
		{
			cout << "Input what kind of factory is this:" << endl;
			cout << "1:Robtized" << endl;
			cout << "2:Modern Robtized" << endl;
			cout << "3:Child Labour" << endl;
			cout << "4:Child Labour with asian kids" << endl;
			cout << "5:Apple factory" << endl;
			choice = intInpCheck();
		}
		switch (choice)
		{
		case 1:
			arr[count] = new RobotizedFactory;
		    break;
		case 2:
			arr[count] = new ModernRobotizedFactory;
			break;
		case 3:
			arr[count] = new ChildLabourFactory;
			break;
		case 4:
			arr[count] = new AsianChildLabourFactory;
			break;
		case 5:
			arr[count] = new AppleFactory;
			break;
		}
		choice = 0;
	}

	for (int count = 0; count < numofF; count++)
	{
		cout << "Factory number " << count << " data:" << endl;
		arr[count]->getFactory();
		arr[count]->~Factory();
	}

	

	return 0;
}
