#pragma once
#include <iostream>
#include "ViewPurchaseHistory.h"
using namespace std;

class ViewPurchaseHistory;
class ViewPurchaseHistoryUI {

private:
	ViewPurchaseHistory* vh;
public:
	void startInterface(ViewPurchaseHistory*);
	void viewHistory(string id);

};

