#include <iostream>
#include "ProductShowUI.h"
using namespace std;

ProductShowUI::ProductShowUI() {


}

ProductShowUI::ProductShowUI(ProductShow* productShow) {
	productShow->psu = this;
	this->ps = productShow;
}


void ProductShowUI::startInterface(ProductShow* productshow) {
	this->ps = productshow;
}

Product* ProductShowUI::searchProduct(string name) {
	return this->ps->getProduct(name);
}