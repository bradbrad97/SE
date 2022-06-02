#pragma once
#include <iostream>
#include "ProductManager.h"
#include "ProductShowUI.h"
using namespace std;
class ProductShowUI;
class ProductShow {
private:
	ProductShowUI* psu;
public:
	ProductShow();
	ProductManager* pM;
	Product* getProduct(string name);
	void setProductManager(ProductManager*);
	ProductShowUI* getpsu();
};
