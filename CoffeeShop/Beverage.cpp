#include "Beverage.h"

Beverage::Beverage(double price, string description): m_price{price}, m_description{description}{}

double Beverage::cost() const
{
	return m_price;
}

void Beverage::getDescription() const
{
	printf("This is s%\n", m_description);
}
