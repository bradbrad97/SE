#pragma once
#include <iostream>
#include "MemberStorage.h"
#include "JoinWithdrawl.h"
#include "SignupUI.h"
#include "Login.h"
using namespace std;
class SignUpUI;
class SignUp {
	MemberStorage* memberStorage = new MemberStorage;
	SignUpUI* signupUI = NULL;
public:
	void startInterface(JoinWithdrawl*, Login*);
	void createNewMember(Member* member);
	MemberStorage* getMemberStorage();
	SignUpUI* getUI();
};