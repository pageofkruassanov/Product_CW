#pragma once
#include <iostream>
using namespace std;
class Product
{
protected:
	string name;
	double price;
	int amount;
public:
	Product(string name, double price, int amount) : name{ name }, price{ price }, amount{ amount } {};
};

