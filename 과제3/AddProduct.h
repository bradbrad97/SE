#pragma once
#include <iostream>
#include "ProductManager.h"
#include "AddProductUI.h"
#include "ShowSalesList.h"
#include "ProductShow.h"
#include "Evaluate.h"
using namespace std;
class AddProductUI;
class AddProduct {
private:
	AddProductUI* addProductUI = NULL;
	ProductManager* pm = new ProductManager;
public:
	void startInterface(ShowSalesList*, ProductShow*, Evaluate*);
	AddProductUI* getUI();
	void add(Product* product);
};
