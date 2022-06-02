#pragma once
#include <iostream>
#include "MemberStorage.h"
#include "JoinWithdrawlUI.h"
using namespace std;
class JoinWithdrawlUI;
class JoinWithdrawl {
	MemberStorage* memberStorage;
	JoinWithdrawlUI* joinWithdrawlUI = NULL;
public:
	JoinWithdrawl();
	void startInterface();
	MemberStorage* getMemberStorage();
	void setMemberStorage(MemberStorage*);
	JoinWithdrawlUI* getUI();
};
