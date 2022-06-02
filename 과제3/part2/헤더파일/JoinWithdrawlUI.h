#pragma once
#include <iostream>
#include "JoinWithdrawl.h"
using namespace std;

class JoinWithdrawl;
class JoinWithdrawlUI {
	JoinWithdrawl* joinWithdrawl;
public:
	void startInterface(JoinWithdrawl*);
	void joinWithdraw(Member*);
};
