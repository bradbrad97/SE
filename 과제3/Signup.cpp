#include <iostream>
#include "SignupUI.h"
using namespace std;

SignUpUI* SignUp::getUI() {
	return this->signupUI;
}

void SignUp::startInterface(JoinWithdrawl* joinwithdrawl, Login* login) {
	if (this->signupUI == NULL) {

		this->signupUI = new SignUpUI;
		this->signupUI->startInterface(this);
		joinwithdrawl->setMemberStorage(this->memberStorage);
		login->setMemberStorage(this->memberStorage);
	}
}

void SignUp::createNewMember(Member* member) {

	this->memberStorage->add(member);

}

MemberStorage* SignUp::getMemberStorage() {
	return this->memberStorage;
}