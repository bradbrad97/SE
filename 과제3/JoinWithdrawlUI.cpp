#include<iostream>
#include "JoinWithdrawlUI.h"
using namespace std;

void JoinWithdrawlUI::joinWithdraw(Member* member) {

	this->joinWithdrawl->getMemberStorage()->erase(member);

}

void JoinWithdrawlUI::startInterface(JoinWithdrawl* joinWithdrawl) {

	this->joinWithdrawl = joinWithdrawl;
}