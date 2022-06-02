#pragma once
#include <iostream>
#include "ProductManager.h"
#include "GetSoldOutProductUI.h"

using namespace std;
class GetSoldOutProductUI;
class GetSoldOutProduct {
	GetSoldOutProductUI* getSoldOutProductUI;
	ProductManager* pm;
public:
	GetSoldOutProduct();
	void startInterface();
	GetSoldOutProductUI* getUI();
	vector<Product*> showSoldOutList(Member* member);
	void setProductManager(ProductManager* productManager);
};