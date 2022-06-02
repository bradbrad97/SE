#pragma once
#include <iostream>
#include "PurchaseList.h"
#include "ViewPurchaseHistory.h"
#include "BuyUI.h"
#include "Member.h"
using namespace std;
class BuyUI;
class ViewPurchaseHistory;
class Buy {
private:
	PurchaseList* pl = new PurchaseList;
public:
	BuyUI* bU = NULL;
	void purchase(Product*, Member*);
	BuyUI* getUI();
	void startInterface(ViewPurchaseHistory*);

};