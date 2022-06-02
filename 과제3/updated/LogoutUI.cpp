#include <iostream>
#include <fstream>
#include "LogoutUI.h"
using namespace std;

void LogoutUI::startInterface(Logout* logout) {

	this->logout = logout;

}

void LogoutUI::logoff(Member* member, ofstream& out_fp) {
	out_fp << "2.2 �α׾ƿ�" << endl;
	out_fp << ">" << member->getID() << endl << endl;
	this->logout->logoff(member);
}