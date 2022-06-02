#include <iostream>
#include <fstream>
#include "ShowSalesListUI.h"
using namespace std;

void ShowSalesListUI::startInterface(ShowSalesList* showSalesList) {
	this->showSalesList = showSalesList;

}

void ShowSalesListUI::showList(Member* member,ofstream& out_fp) {
	out_fp << "3.2. 등록 상품 조회" << endl;
	vector<Product*>list =  this->showSalesList->showList(member);

	for (unsigned int i = 0; i < list.size(); i++) {
		out_fp << list[i]->getName() << " " << list[i]->getCompanyName() << " " <<
			list[i]->getPrice() << " " << list[i]->getleftQuantity() << endl;

	}

}