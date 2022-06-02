#include <iostream>
#include "ShowSalesListUI.h"
using namespace std;

void ShowSalesListUI::startInterface(ShowSalesList* showSalesList) {
	this->showSalesList = showSalesList;

}

void ShowSalesListUI::showList(Member* member) {

	this->showSalesList->showList(member);

}