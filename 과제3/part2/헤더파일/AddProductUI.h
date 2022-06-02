#pragma once
#include <iostream>
#include"AddProduct.h"
using namespace std;
class AddProduct;
class AddProductUI {

private:
	AddProduct* addProduct;
public:
	void startInterface(AddProduct*);
	void Add(Product* product);
};


