#include <iostream>
#include "BuyUI.h"
using namespace std;

void BuyUI::startInterface(Buy* buy) {

	this->buy = buy;

}


void BuyUI::purchase(Product* product, Member* member) {

	this->buy->purchase(product,member);

}