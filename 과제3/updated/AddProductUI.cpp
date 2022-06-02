#pragma once
#include <iostream>
#include <fstream>
#include "AddProductUI.h"
using namespace std;

void AddProductUI::startInterface(AddProduct* addProduct) {

	this->addProduct = addProduct;

}

void AddProductUI::Add(Product* product, ofstream& out_fp) {
	out_fp << "3.1. 판매 의류 등록" << endl;
	out_fp << "> " << product->getName() << " " << product->getCompanyName()
		<< " " << product->getPrice() << " " << product->getleftQuantity() << endl << endl;
	this->addProduct->add(product);
}

