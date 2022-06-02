#include<iostream>
#include "Evaluate.h"
using namespace std;

void Evaluate::evaluate(string name, int eval) {

	Product* product = this->pm->getProduct(name);
	product->updateEval(eval);

}

void Evaluate::startInterface() {
	if (this->evu == NULL) {

		this->evu = new EvaluateUI;
		this->evu->startInterface(this);
	}

}

void Evaluate::setProductManager(ProductManager* productManager) {
	this->pm = productManager;
}

EvaluateUI* Evaluate::getUI() {

	return this->evu;

}