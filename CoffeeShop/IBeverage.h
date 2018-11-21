#pragma once
class IBeverage
{
public:
	IBeverage() = default;
	virtual ~IBeverage() = default;
	virtual double cost() const = 0;
	virtual void getDescription() const = 0;
};


