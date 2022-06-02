#include<iostream>
#include "ViewPurchaseHistory.h"
using namespace std;

ViewPurchaseHistoryUI* ViewPurchaseHistory::getUI() {
	return this->vphUI;

}

void ViewPurchaseHistory::startInterface() {

	if (this->vphUI == NULL) {
		this->vphUI = new ViewPurchaseHistoryUI;
		this->vphUI->startInterface(this);

	}

}

void ViewPurchaseHistory::viewHistory(string id) {
	this->pcl->PrintPurchaseDetails(id);
}

void ViewPurchaseHistory::setPurchaseList(PurchaseList* purchaseList) {

	this->pcl = purchaseList;

}
