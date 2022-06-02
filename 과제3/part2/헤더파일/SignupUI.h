#pragma once
#include<iostream>
#include "Signup.h"
using namespace std;
class SignUp;
class SignUpUI {
	SignUp* signup;
public:
	void startInterface(SignUp*);
	void createNewMember(Member* member);

};