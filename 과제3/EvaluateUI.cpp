#include<iostream>
#include "EvaluateUI.h"
using namespace std;

void EvaluateUI::startInterface(Evaluate* evaluate) {

	this->eva = evaluate;

}


void EvaluateUI::evaluate(string name, int eval) {

	this->eva->evaluate(name, eval);

}

