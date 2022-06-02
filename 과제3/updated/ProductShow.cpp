#include<iostream>
#include "ProductShow.h"
using namespace std;

ProductShow:: ProductShow() {
	this->psu = new ProductShowUI;
	this->psu->startInterface(this);

}

ProductShowUI* ProductShow::getpsu() {
	return this->psu;
}
Product* ProductShow::getProduct(string name) {

	return this->pM->getProduct(name);

}

void ProductShow::setProductManager(ProductManager* productManager) {

	this->pM = productManager;

}
