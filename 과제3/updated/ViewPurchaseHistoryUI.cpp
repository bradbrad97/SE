#include <iostream>
#include <fstream>
#include "ViewPurchaseHistoryUI.h"
using namespace std;

void ViewPurchaseHistoryUI::startInterface(ViewPurchaseHistory* viewPurchaseHistory) {

	this->vh = viewPurchaseHistory;
}

void ViewPurchaseHistoryUI::viewHistory(string id, ofstream& out_fp) {
	out_fp << "4.3. 상품 구매 내역 조회" << endl;
	vector<Product*> list = this->vh->viewHistory(id);
	for (unsigned int i = 0; i < list.size(); i++) {
	out_fp << list[i]->getID() << " " << list[i]->getName() << " "
		<< list[i]->getCompanyName() << " " << list[i]->getPrice() << " "
		<< list[i]->getleftQuantity() << " " << list[i]->getEvaluation() << endl;

	}

}