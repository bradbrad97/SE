#include <iostream>
#include "ViewPurchaseHistoryUI.h"
using namespace std;

void ViewPurchaseHistoryUI::startInterface(ViewPurchaseHistory* viewPurchaseHistory) {

	this->vh = viewPurchaseHistory;
}

void ViewPurchaseHistoryUI::viewHistory(string id) {
	this->vh->viewHistory(id);

}