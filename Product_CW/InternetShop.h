#pragma once
#include "Product.h"
#include "ElectronicProduct.h"
#include "Clothing.h"
class InternetShop
{
	Product* product;
	int size;
public:
	InternetShop(Product* product, int size) : product{ product }, size{ size } {};
	void placeOrder(const Product& product);
};

