#pragma once
#include "Product.h"
class ElectronicProduct : public Product
{
	string guaranteePeriod;
public:
	ElectronicProduct(string name, double price, int amount, string guaranteePeriod) : Product{ name, price, amount }, guaranteePeriod{ guaranteePeriod } {};
	void placeOrder(int amount);
};

