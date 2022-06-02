#pragma once
#include<iostream>
#include "GetSoldOutProduct.h"
using namespace std;

class GetSoldOutProduct;
class GetSoldOutProductUI {
	GetSoldOutProduct* getSoldOutProduct;
public:
	void startInterface(GetSoldOutProduct* getSoldOutProduct);
	void showSoldOutList(Member* member, ofstream& out_fp);

};