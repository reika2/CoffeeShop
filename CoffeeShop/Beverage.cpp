#include "Beverage.h"
#include <iostream>

Beverage::Beverage(double price, string description) : m_price{price}, m_description{description}{}

double Beverage::cost() const
{
	return m_price;
}


string Beverage::getDescription() const
{
	return m_description;
}

