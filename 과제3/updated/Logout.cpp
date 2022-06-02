#include <iostream>
#include "Logout.h"
using namespace std;
Logout::Logout() {
	this->logoutUI = new LogoutUI;
	this->logoutUI->startInterface(this);
}
void Logout::startInterface() {

	if (this->logoutUI == NULL) {
		this->logoutUI = new LogoutUI;
		this->logoutUI->startInterface(this);

	}

}

void Logout::logoff(Member* member) {

	member = NULL;

}

LogoutUI* Logout::getUI() {

	return this->logoutUI;

}