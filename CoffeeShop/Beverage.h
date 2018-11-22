#pragma once
#include "ICafe.h"
#include<string>

using std::string;

class Beverage :
	public ICafe
{
public:
	Beverage() = default;
	Beverage(double cost, string description);
	virtual ~Beverage() = default;

	double cost() const;
	string getDescription() const;

private:
	double m_price;
	string m_description;
};

