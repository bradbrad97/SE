#include<iostream>
#include "Product.h"
using namespace std;

string Product::getID() {
	return this->sellerID;

}

string Product::getName() {// ��ǰ�� �̸� ��ȯ
	return this->name;
}

string Product::getCompanyName() {

	return this->companyName;
}

int Product::getPrice() {

	return this->price;
}

int Product::getInitialQuantity(){
	return this->initialQuantity;
}

int Product::getleftQuantity() {
	return this->leftQuantity;
}
double Product::getEvaluation() {
	return this->evaluation;

}

void Product::viewDetails() {// ��ǰ�� ������ ���
	cout << this->name
		<< " " << this->companyName
		<< " " << this->price
		<< " " << this->leftQuantity
		<< " " << this->evaluation
		<< endl;

}
void Product::getSimpleInfos() {// ��ǰ�� ������ ���� ���
	cout << this->sellerID << " " << this->name << endl;
}
void Product::reduceQty() {//��ǰ�� ��� ����
	int left = this->leftQuantity - 1;
	this->leftQuantity = left;
	

}
void Product::updateEval(int eval) {//��ǰ�� ��� ������ ������Ʈ

	this->evalCount++;
	this->evaluation = (1.0) * (this->evaluation + eval) / this->evalCount;

}