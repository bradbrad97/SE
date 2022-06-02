#include <iostream>
#include <fstream>
#include "LoginUI.h"
using namespace std;

void LoginUI::startInterface(Login* login) {

	this->login = login;
}



Member* LoginUI::checkLogin(string id, string pswd, ofstream& out_fp) {
	Member* findMember =  this->login->checkLogin(id, pswd);
	out_fp << "2.1. ·Î±×ÀÎ" << endl;
	out_fp << "> " << findMember->getID() << " " << findMember->getPswd() << endl << endl;
	return findMember;

}