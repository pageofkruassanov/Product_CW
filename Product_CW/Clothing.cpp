#include "Clothing.h"

void Clothing::placeOrder(int amount)
{
	if (this->amount == 0)
		throw exception("The product is out of stock.");
	else if (this->amount < amount)
		throw exception("The product is not enough in the store.");
	else {
		this->amount -= amount;
		cout << "Product added to cart";
	}
}
