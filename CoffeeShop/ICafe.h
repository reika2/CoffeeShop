#pragma once
#include <string>
using std::string;

class ICafe
{
public:
	ICafe() = default;
	virtual ~ICafe() = default;
	virtual double cost() const = 0;
	virtual string getDescription() const = 0;
};
