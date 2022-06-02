#pragma once
#include <iostream>
#include "ProductManager.h"
#include "ProductShowUI.h"
using namespace std;
class ProductShowUI;
class ProductShow {
private:
public:
	ProductManager* pM = new ProductManager;
	ProductShowUI* psu = NULL;
	Product* getProduct(string name);
	void setProductManager(ProductManager*);
	ProductShowUI* getpsu();
};
