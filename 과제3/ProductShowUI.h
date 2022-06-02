#pragma once
#include<iostream>
#include "ProductShow.h"
using namespace std;
class ProductShow;

class ProductShowUI {
private:
	ProductShow* ps;
public:
	ProductShowUI(ProductShow*);
	ProductShowUI();
	void startInterface(ProductShow*);
	Product* searchProduct(string name);
};