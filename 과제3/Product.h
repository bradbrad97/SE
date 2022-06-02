#pragma once
#include <iostream>
using namespace std;

class Product {
private:
	//attribute
	string name;
	string sellerID;
	string companyName;
	int price;
	double evaluation = 0;
	int evalCount = 0;
	int leftQuantity;
	int initialQuantity;
public:
	Product() {};
	Product(string sellerID, string name, string companyName, int price
		, int leftQuantity, int initialQuantity) {
		this->sellerID = sellerID;
		this->name = name;
		this->companyName = companyName;

		this->price = price;
		this->leftQuantity = leftQuantity;
		this->initialQuantity = initialQuantity;

	}
	string getID();
	string getName();
	void getSimpleInfos();
	void viewDetails();
	void reduceQty();
	void updateEval(int eval);
};