#include<iostream>
#include "ViewPurchaseHistory.h"
using namespace std;
ViewPurchaseHistory::ViewPurchaseHistory() {
	this->vphUI = new ViewPurchaseHistoryUI;
	this->vphUI->startInterface(this);
}

ViewPurchaseHistoryUI* ViewPurchaseHistory::getUI() {
	return this->vphUI;

}

void ViewPurchaseHistory::startInterface() {

	if (this->vphUI == NULL) {
		this->vphUI = new ViewPurchaseHistoryUI;
		this->vphUI->startInterface(this);

	}

}

vector<Product*> ViewPurchaseHistory::viewHistory(string id) {
	return this->pcl->PrintPurchaseDetails(id);
}

void ViewPurchaseHistory::setPurchaseList(PurchaseList* purchaseList) {

	this->pcl = purchaseList;

}
