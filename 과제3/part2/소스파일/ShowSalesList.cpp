#include <iostream>
#include "ShowSalesList.h"
using namespace std;

void ShowSalesList::startInterface() {

	if (this->showSalesListUI == NULL) {
		this->showSalesListUI = new ShowSalesListUI;
		this->showSalesListUI->startInterface(this);

	}

}

void ShowSalesList::setProductManager(ProductManager* productManager) {
	this->pm = productManager;

}

void ShowSalesList::showList(Member* member) {

	this->pm->getProducts(member);

}

ShowSalesListUI* ShowSalesList::getUI() {

	return this->showSalesListUI;

}