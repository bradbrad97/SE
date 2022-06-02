#include <iostream>
#include "LoginUI.h"
using namespace std;

void LoginUI::startInterface(Login* login) {

	this->login = login;
}



Member* LoginUI::checkLogin(string id, string pswd) {

	return this->login->checkLogin(id, pswd);

}