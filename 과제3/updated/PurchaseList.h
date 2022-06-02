#pragma once
#include <iostream>
#include <vector>
#include "Product.h"
using namespace std;

class PurchaseList {
	vector<string> idList;
	vector<Product*> list;

public:

	int size = 0;
	vector<Product*> PrintPurchaseDetails(string id);
	void add(Product*,string id);
};