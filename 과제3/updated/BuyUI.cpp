#include <iostream>
#include <fstream>
#include "BuyUI.h"
using namespace std;

void BuyUI::startInterface(Buy* buy) {

	this->buy = buy;

}


void BuyUI::purchase(Product* product, Member* member, ofstream& out_fp) {
	out_fp << "4.2. 상품 구매" << endl;
	out_fp << product->getID() << " " << product->getName() << endl;
	this->buy->purchase(product,member);

}