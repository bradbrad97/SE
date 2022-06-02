#pragma once
#include <iostream>
#include "Logout.h"
#include "Member.h"
using namespace std;
class Logout;

class LogoutUI {
	Logout* logout;
public:
	void startInterface(Logout*);
	void logoff(Member*, ofstream& out_fp);
};