#pragma once
#include <iostream>
#include "MemberStorage.h"
using namespace std;

Member* MemberStorage::getMember(string id, string pswd) {


	for (unsigned int i = 0; i < this->memberList.size(); i++) {
		if (this->memberList[i]->getID() == id
			&& this->memberList[i]->getPswd() == pswd) {

			return this->memberList[i];
		}

	}

}


void MemberStorage::add(Member* member) {

	this->memberList.push_back(member);

}

void MemberStorage::erase(Member* member) {
	vector<Member*>::iterator it;
	for (it = this->memberList.begin(); it != this->memberList.end(); it++) {
		if ((*it)->getID() == member->getID()) {
			this->memberList.erase(it);
			break;
		}

	}

}