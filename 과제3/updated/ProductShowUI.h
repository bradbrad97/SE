#pragma once
#include<iostream>
#include "ProductShow.h"
using namespace std;
class ProductShow;

class ProductShowUI {
private:
	ProductShow* ps;
public:
	
	
	void startInterface(ProductShow*);
	Product* searchProduct(string name,ofstream& out_fp);
};