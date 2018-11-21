#pragma once
#include "ICoffeeBase.h"
#include <string>
using std::string;

class CoffeeBase :
	public ICoffeeBase
{
public:
	CoffeeBase();
	CoffeeBase(double price, string description);
	~CoffeeBase();
	double cost() const override;
	void getDescription() const override;

private:
	double m_price;
	string m_description;
};


};

