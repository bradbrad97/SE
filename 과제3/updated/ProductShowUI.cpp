#include <iostream>
#include <fstream>
#include "ProductShowUI.h"
using namespace std;



void ProductShowUI::startInterface(ProductShow* productshow) {
	this->ps = productshow;
}

Product* ProductShowUI::searchProduct(string name,ofstream& out_fp) {
	out_fp << "4.1. 상품 정보 검색" << endl;
	Product* findProduct =  this->ps->getProduct(name);
	out_fp << findProduct->getID() << " " << findProduct->getName() << " "
		<< findProduct->getCompanyName() << " " << findProduct->getPrice() << " "
		<< findProduct->getleftQuantity() << " " << findProduct->getEvaluation() << endl;
	return findProduct;
}