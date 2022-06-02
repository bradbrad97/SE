#pragma once
#include <iostream>
#include "ProductManager.h"
#include "EvaluateUI.h"
using namespace std;

class EvaluateUI;
class Evaluate {
public:
	Evaluate();
	EvaluateUI* evu = NULL;
	ProductManager* pm;
	void evaluate(string name, int eval);
	void startInterface();
	void setProductManager(ProductManager*);
	EvaluateUI* getUI();
};