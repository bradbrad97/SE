#include <iostream>
#include "ShowSalesList.h"
using namespace std;

ShowSalesList::ShowSalesList() {

	this->showSalesListUI = new ShowSalesListUI;
	this->showSalesListUI->startInterface(this);

}
void ShowSalesList::startInterface() {

	if (this->showSalesListUI == NULL) {
		this->showSalesListUI = new ShowSalesListUI;
		this->showSalesListUI->startInterface(this);

	}

}

void ShowSalesList::setProductManager(ProductManager* productManager) {
	this->pm = productManager;

}

vector<Product*> ShowSalesList::showList(Member* member) {

	return this->pm->getProducts(member);

}

ShowSalesListUI* ShowSalesList::getUI() {

	return this->showSalesListUI;

}