#include <iostream>
#include "GetSoldOutProduct.h"
using namespace std;

GetSoldOutProduct::GetSoldOutProduct() {

	this->getSoldOutProductUI = new GetSoldOutProductUI;
	this->getSoldOutProductUI->startInterface(this);

}
void GetSoldOutProduct::startInterface() {

	if (this->getSoldOutProductUI == NULL) {
		this->getSoldOutProductUI = new GetSoldOutProductUI;
		this->getSoldOutProductUI->startInterface(this);

	}

}

void GetSoldOutProduct::setProductManager(ProductManager* productManager) {
	this->pm = productManager;

}

vector<Product*> GetSoldOutProduct::showSoldOutList(Member* member) {

	return this->pm->getSoldOutProducts(member);

}

GetSoldOutProductUI* GetSoldOutProduct::getUI() {

	return this->getSoldOutProductUI;

}