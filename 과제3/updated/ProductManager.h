#pragma once
#include<iostream>
#include "Product.h"
#include "Member.h"
using namespace std;

class ProductManager {
public:
	int size = 0;
	static vector<Product*> lists;
	Product* getProduct(string name);
	void addProduct(Product*);
	vector<Product*> getProducts(Member*);
	vector<Product*> getSoldOutProducts(Member*);
	int getSize();
};

