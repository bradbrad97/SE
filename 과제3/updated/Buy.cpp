#pragma once
#include <iostream>
#include"Buy.h"
using namespace std;
Buy::Buy() {
	this->bU = new BuyUI;
	this->bU->startInterface(this);
}
void Buy::purchase(Product* product, Member* member) {
	this->pl->add(product, member->getID());
	product->reduceQty();

}

BuyUI* Buy::getUI() {

	return this->bU;
}

void Buy::startInterface(ViewPurchaseHistory* viewPurchaseHistory) {
	if (this->bU == NULL) {
		this->bU = new BuyUI;
		this->bU->startInterface(this);
		viewPurchaseHistory->setPurchaseList(this->pl);
	}
}

void Buy::setPurchaseList(PurchaseList* purchaseList) {

	this->pl = purchaseList;

}