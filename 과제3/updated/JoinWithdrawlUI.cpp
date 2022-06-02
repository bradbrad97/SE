#include<iostream>
#include <fstream>
#include "JoinWithdrawlUI.h"
using namespace std;

void JoinWithdrawlUI::joinWithdraw(Member* member, ofstream& out_fp) {
	out_fp << "1.2. È¸¿øÅ»Åð" << endl;
	out_fp << "> " << member->getID() << endl << endl;
	this->joinWithdrawl->getMemberStorage()->erase(member);

}

void JoinWithdrawlUI::startInterface(JoinWithdrawl* joinWithdrawl) {

	this->joinWithdrawl = joinWithdrawl;
}