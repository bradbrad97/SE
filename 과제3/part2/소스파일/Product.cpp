#include<iostream>
#include "Product.h"
using namespace std;

string Product::getID() {
	return this->sellerID;

}

string Product::getName() {// ��ǰ�� �̸� ��ȯ
	return this->name;
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
	cout << "left : " << this->leftQuantity << endl;

}
void Product::updateEval(int eval) {//��ǰ�� ��� ������ ������Ʈ

	this->evalCount++;
	this->evaluation = (1.0) * (this->evaluation + eval) / this->evalCount;

}