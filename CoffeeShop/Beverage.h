#pragma once
#include "IBeverage.h"
#include <string>
using std::string;

class Beverage :
	public IBeverage
{
public:
	Beverage() = default;
	Beverage(double price, string description);

	~Beverage() = default;

	double cost() const override;
	void getDescription() const override;

private:
	double m_price;
	string m_description;
};

