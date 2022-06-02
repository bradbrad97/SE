#include <iostream>
#include "SignupUI.h"
using namespace std;

void SignUpUI::startInterface(SignUp* signup) {
	this->signup = signup;
}

void SignUpUI::createNewMember(Member* member) {

	this->signup->createNewMember(member);

}
