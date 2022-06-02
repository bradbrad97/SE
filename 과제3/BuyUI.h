#pragma once
#include <iostream>
#include "Buy.h"
#include "Product.h"
#include "Member.h"
using namespace std;
class Buy;
class BuyUI {

private:
	Buy* buy;
public:
	void purchase(Product* product, Member* member);
	void startInterface(Buy*);

};