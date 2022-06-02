#pragma once
#include<iostream>
#include "MemberStorage.h"
#include "LoginUI.h"

class LoginUI;
class Login {

private:
	LoginUI* loginUI = NULL;
	MemberStorage* memberStorage;
public:
	void startInterface();
	void setMemberStorage(MemberStorage*);
	LoginUI* getUI();
	Member* checkLogin(string id, string pswd);
};