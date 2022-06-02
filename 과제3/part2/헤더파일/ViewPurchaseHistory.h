#pragma once
#include <iostream>
#include "ViewPurchaseHistoryUI.h"
#include "PurchaseList.h"
using namespace std;
class ViewPurchaseHistoryUI;
class ViewPurchaseHistory {
private:
	PurchaseList* pcl;
	ViewPurchaseHistoryUI* vphUI = NULL;
	
public:
	void viewHistory(string id);
	void startInterface();
	void setPurchaseList(PurchaseList*);
	ViewPurchaseHistoryUI* getUI();
};
