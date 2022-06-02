#pragma once
#include<iostream>
#include "ProductManager.h"
#include "ShowSalesListUI.h"
using namespace std;
class ShowSalesListUI;
class ShowSalesList {

	ShowSalesListUI* showSalesListUI;
	ProductManager* pm;
public:
	ShowSalesList();
	void startInterface();
	ShowSalesListUI* getUI();
	vector<Product*> showList(Member* member);
	void setProductManager(ProductManager* productManager);
};
