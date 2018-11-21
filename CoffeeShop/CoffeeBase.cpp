#include "CoffeeBase.h"




CoffeeBase::CoffeeBase(double price, string description) : m_price{ price }, m_description{ description }{}

double CoffeeBase::cost() const
{
	return m_price;
}

void CoffeeBase::getDescription() const
{
	printf("This is s%\n", m_description);
}
