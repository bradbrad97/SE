#pragma once
#include <iostream>
#include "Product.h"
using namespace std;

class PurchaseList {
	string* idList = new string[1000];
	Product** lists = new Product * [1000];

public:

	int size = 0;
	void PrintPurchaseDetails(string id);
	void add(Product*,string id);
};