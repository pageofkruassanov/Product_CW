#include <iostream>
#include "Clothing.h"
#include "ElectronicProduct.h"
#include "Product.h"
int main()
{
    const int sizeProduct = 4;
    Product* product[sizeProduct] = { new Clothing("t-shirt", 20.99, 5, "L", "Black"), new Clothing("t-shirt", 18.99, 8, "M", "White"), new Clothing("t-short", 19, 3, "L", "Yellow"), new ElectronicProduct("Headphones", 25, 0, "1 year") };
    try {
        product[0]->placeOrder(9);
    }
    catch (const exception& ex) {
        cerr << ex.what();
    }
    cout << endl << "-------------" << endl;
    try {
        product[1]->placeOrder(2);
    }
    catch (const exception& ex) {
        cerr << ex.what();
    }
    cout << endl << "-----------------" << endl;
    try {
        product[3]->placeOrder(2);
    }
    catch (const exception& ex) {
        cerr << ex.what();
    }
}