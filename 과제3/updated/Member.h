#pragma once
#include <iostream>
#include <vector>
#include "Product.h"
using namespace std;


class Member {

	string memberName;
	string memberSocialNum;
	string memberID;
	string memberPW;
	vector<Product> purchaseList;
	vector<Product> getList();
public:
	Member() {

	};
	Member(string memberName,
		string memberSocialNum,
		string memberID,
		string memberPW);
	string getName();
	string getSocialNum();
	string getID();
	string getPswd();

};