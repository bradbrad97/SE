#pragma once
#include <iostream>
#include "Evaluate.h"

using namespace std;
class Evaluate;
class EvaluateUI {
public:
	Evaluate* eva;
	void startInterface(Evaluate*);
	void evaluate(string name, int eval);
};