#include <iostream>
#include "LoginUI.h"
using namespace std;

Login::Login() {
	this->loginUI = new LoginUI;
	this->loginUI->startInterface(this);
}

Member* Login::checkLogin(string id, string pswd) {

	return this->memberStorage->getMember(id, pswd);

}


LoginUI* Login::getUI() {

	return this->loginUI;
}

void Login::setMemberStorage(MemberStorage* memberStorage) {
	this->memberStorage = memberStorage;

}

void Login::startInterface() {
	if (this->loginUI == NULL) {
		this->loginUI = new LoginUI;
		this->loginUI->startInterface(this);
	}
}