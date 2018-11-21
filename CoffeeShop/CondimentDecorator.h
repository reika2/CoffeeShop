#pragma once
#include "IBeverage.h"
#include <string>
using std::string;

class CondimentDecorator :
	public IBeverage
{
public:
	CondimentDecorator() = default;
	CondimentDecorator(double price, string description);
	~CondimentDecorator() = default;


	double cost() const override;
	void getDescription() const override;

private:
	double m_price;
	string m_description;
};

