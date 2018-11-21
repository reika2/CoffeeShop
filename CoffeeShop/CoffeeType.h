#pragma once
#include "IBeverage.h"
#include "CoffeeBase.h"
#include "CondimentDecorator.h"
#include <string>
using std::string;

class CoffeeType :
	public IBeverage
{
public:
	CoffeeType() = default;
	CoffeeType(CoffeeBase coffeeBase, CondimentDecorator condimentDecorator);

	~CoffeeType() = default;

	double cost() const override;
	void getDescription() const override;

private:
	CoffeeBase m_coffeebase;
	CondimentDecorator m_condimentdecorator;
};

