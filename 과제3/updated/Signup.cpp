#include <iostream>
#include "SignupUI.h"
using namespace std;

SignUp::SignUp() {

	this->signupUI = new SignUpUI;
	this->signupUI->startInterface(this);
}


SignUpUI* SignUp::getUI() {
	return this->signupUI;
}

void SignUp::startInterface(JoinWithdrawl* joinwithdrawl, Login* login) {
	if (this->signupUI == NULL) {

	
		
		
	}
}

void SignUp::createNewMember(Member* member) {

	this->memberStorage->add(member);

}

MemberStorage* SignUp::getMemberStorage() {
	return this->memberStorage;
}

void SignUp::setMemberStorage(MemberStorage* memberStorage) {

	this->memberStorage = memberStorage;

}