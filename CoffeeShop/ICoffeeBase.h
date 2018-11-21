#pragma once
class ICoffeeBase
{
public:
	ICoffeeBase() = default;
	virtual ~ICoffeeBase() = default;
	virtual double cost() const = 0;
	virtual void getDescription() const = 0;

};

