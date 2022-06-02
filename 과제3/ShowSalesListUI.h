#pragma once
#include <iostream>
#include "ShowSalesList.h"
using namespace std;
class ShowSalesList;
class ShowSalesListUI {
	ShowSalesList* showSalesList;
public:
	void startInterface(ShowSalesList* showSalesList);
	void showList(Member* member);

};

