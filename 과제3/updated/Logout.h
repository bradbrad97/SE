#pragma once
#include <iostream>
#include "LogoutUI.h"
#include "Member.h"
using namespace std;
class LogoutUI;
class Member;

class Logout {
	LogoutUI* logoutUI = NULL;
public:
	Logout();
	void startInterface();
	void logoff(Member* member);
	LogoutUI* getUI();

};