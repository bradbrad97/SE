#pragma once
#ifndef PRODUCT_LIST_H



#include <iostream>
#include "Product.h"

class ProductList {
	Product** lists = new Product * [1000];
	int size = 0;
public:
	Product* getProduct(string name);
	int getSize();
};
#endif