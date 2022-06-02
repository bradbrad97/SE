#pragma once
#include<iostream>
#include "Product.h"
#include "Member.h"
using namespace std;

class ProductManager {
public:
	int size = 0;
	Product** lists = new Product * [1000];
	Product* getProduct(string name);
	void addProduct(Product*);
	void getProducts(Member*);
	int getSize();
};
