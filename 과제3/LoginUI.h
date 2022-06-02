#pragma once
#include <iostream>
#include "Login.h"
using namespace std;

class Login;
class LoginUI {

private:
	Login* login;
public:

	void startInterface(Login*);
	Member* checkLogin(string id, string pswd);
};


