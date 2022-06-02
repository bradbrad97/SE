#include <iostream>
#include <fstream>
#include "GetSoldOutProductUI.h"
using namespace std;

void GetSoldOutProductUI::startInterface(GetSoldOutProduct* getSoldOutProduct) {
	this->getSoldOutProduct = getSoldOutProduct;

}

void GetSoldOutProductUI::showSoldOutList(Member* member, ofstream& out_fp) {
	out_fp << "3.3. 판매 완료 상품 조회" << endl;
	vector<Product*>list = this->getSoldOutProduct->showSoldOutList(member);
	for (unsigned int i = 0; i < list.size(); i++) {
		out_fp << ">" << list[i]->getName() << " " << list[i]->getCompanyName() << " " <<
			list[i]->getPrice() << " " << list[i]->getInitialQuantity() << list[i]->getEvaluation() <<endl << endl;

	}

}