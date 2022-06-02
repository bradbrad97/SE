#include <iostream>
#include <fstream>
#include "SignupUI.h"
using namespace std;

void SignUpUI::startInterface(SignUp* signup) {
	this->signup = signup;
}

void SignUpUI::createNewMember(Member* member, ofstream& out_fp) {
	out_fp << "1.1. 회원가입" << endl;
	out_fp << ">" << member->getName() << " " << member->getSocialNum() << " " << member->getID()
		<< " " << member->getPswd() << endl << endl;
	this->signup->createNewMember(member);
}

