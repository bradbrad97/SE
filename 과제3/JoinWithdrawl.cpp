#include<iostream>
#include "JoinWithdrawl.h"
using namespace std;

MemberStorage* JoinWithdrawl::getMemberStorage() {
	return this->memberStorage;
}

void JoinWithdrawl::setMemberStorage(MemberStorage* memberStorage) {

	this->memberStorage = memberStorage;

}

void JoinWithdrawl::startInterface() {
	if (this->joinWithdrawlUI == NULL) {
		this->joinWithdrawlUI = new JoinWithdrawlUI;
		this->joinWithdrawlUI->startInterface(this);
	}

}

JoinWithdrawlUI* JoinWithdrawl::getUI() {

	return this->joinWithdrawlUI;

}
