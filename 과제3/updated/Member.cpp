#pragma once
#include <iostream>
#include "Member.h"
using namespace std;

Member::Member(string memberName,
	string memberSocialNum,
	string memberID,
	string memberPW) {
	this->memberName = memberName;
	this->memberSocialNum = memberSocialNum;
	this->memberID = memberID;
	this->memberPW = memberPW;

}
string Member::getName() {
	return this->memberName;

}
string Member::getID() {

	return this->memberID;

}
string Member::getSocialNum() {

	return this->memberSocialNum;
}

string Member::getPswd() {

	return this->memberPW;

}

vector<Product> Member::getList() {
	return this->purchaseList;

}