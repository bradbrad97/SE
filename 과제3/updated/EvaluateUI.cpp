#include<iostream>
#include <fstream>
#include "EvaluateUI.h"
using namespace std;

void EvaluateUI::startInterface(Evaluate* evaluate) {

	this->eva = evaluate;

}


void EvaluateUI::evaluate(string name, int eval,ofstream& out_fp) {
	out_fp << "4.4. 상품 구매 만족도 평가" << endl;
	out_fp << name << " " << eval << endl;
	this->eva->evaluate(name, eval);

}

