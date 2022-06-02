#pragma once
#include<iostream>
#include "ProductManager.h"
#include "ShowSalesListUI.h"
using namespace std;
class ShowSalesListUI;
class ShowSalesList {

	ShowSalesListUI* showSalesListUI = NULL;
	ProductManager* pm;
public:
	void startInterface();
	ShowSalesListUI* getUI();
	void showList(Member* member);
	void setProductManager(ProductManager* productManager);
};
