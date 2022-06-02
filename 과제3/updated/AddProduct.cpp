#pragma once
#include <iostream>
#include "AddProduct.h"
using namespace std;
AddProduct::AddProduct() {
	this->addProductUI = new AddProductUI;
	this->addProductUI->startInterface(this);
}
AddProductUI* AddProduct::getUI() {

	return this->addProductUI;
}

void AddProduct::add(Product* product)  
{

	this->pm->addProduct(product);
}

void AddProduct::startInterface(ShowSalesList* showSalesList,
	ProductShow* productShow, Evaluate* evaluate) {

	if (this->addProductUI == NULL) {
		this->addProductUI = new AddProductUI;
		this->addProductUI->startInterface(this);
		showSalesList->setProductManager(this->pm);
		productShow->setProductManager(this->pm);
		evaluate->setProductManager(this->pm);
	}
}

void AddProduct::setProductManager(ProductManager* productManager) {

	this->pm = productManager;

}