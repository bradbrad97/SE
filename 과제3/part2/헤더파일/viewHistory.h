#pragma once
#include <iostream>
#include "PurchaseList.h"
#include "viewPurchaseHistoryUI.h"

using namespace std;

class ViewHistory {
private:
	PurchaseList* pcl;
	ViewPurchaseHistoryUI* vph;
public:
	void viewHistory();
};
