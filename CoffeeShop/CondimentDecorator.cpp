#include "CondimentDecorator.h"

CondimentDecorator::CondimentDecorator(double price, string description) : m_price{ price }, m_description{ description }{}

double CondimentDecorator::cost() const
{
	return m_price;
}

void CondimentDecorator::getDescription() const
{
	printf("This is s%\n", m_description);
}
