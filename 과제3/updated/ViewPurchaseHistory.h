#pragma once
#include <iostream>
#include "ViewPurchaseHistoryUI.h"
#include "PurchaseList.h"
using namespace std;
class ViewPurchaseHistoryUI;
class ViewPurchaseHistory {
private:
	PurchaseList* pcl;
	ViewPurchaseHistoryUI* vphUI;
	
public:
	ViewPurchaseHistory();
	vector<Product*> viewHistory(string id);
	void startInterface();
	void setPurchaseList(PurchaseList*);
	ViewPurchaseHistoryUI* getUI();
};
