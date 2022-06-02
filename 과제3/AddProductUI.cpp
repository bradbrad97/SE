#pragma once
#include <iostream>
#include "AddProductUI.h"
using namespace std;

void AddProductUI::startInterface(AddProduct* addProduct) {

	this->addProduct = addProduct;

}

void AddProductUI::Add(Product* product) {

	this->addProduct->add(product);
}

