#pragma once
#include <iostream>
#include "Member.h"
using namespace std;

class MemberStorage {

public:
	vector<Member*> memberList;
	void add(Member*);
	void erase(Member*);
	Member* getMember(string id, string pswd);
};