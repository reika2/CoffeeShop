#include "CoffeeType.h"
#include <iostream>

CoffeeType::CoffeeType(CoffeeBase coffeeBase, CondimentDecorator condimentDecorator) : m_coffeebase{ coffeeBase }, m_condimentdecorator{condimentDecorator}{}


double CoffeeType::cost()
{
	return m_coffeebase.cost() + m_condimentdecorator.cost();
}

void CoffeeType::getDescription() const
{
	std::cout << m_coffeebase + m_condimentdecorator << std::endl;