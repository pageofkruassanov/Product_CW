#pragma once
#include "Product.h"
class Clothing : public Product
{
	string size;
	string color;
public:
	Clothing(string name, double price, int amount, string size, string color) : Product{ name, price, amount }, size{ size }, color{ color } {};
};

