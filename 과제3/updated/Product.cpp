#include<iostream>
#include "Product.h"
using namespace std;

string Product::getID() {
	return this->sellerID;

}

string Product::getName() {// 제품의 이름 반환
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

void Product::viewDetails() {// 제품의 상세정보 출력
	cout << this->name
		<< " " << this->companyName
		<< " " << this->price
		<< " " << this->leftQuantity
		<< " " << this->evaluation
		<< endl;

}
void Product::getSimpleInfos() {// 제품의 간단한 정보 출력
	cout << this->sellerID << " " << this->name << endl;
}
void Product::reduceQty() {//제품의 재고 감소
	int left = this->leftQuantity - 1;
	this->leftQuantity = left;
	

}
void Product::updateEval(int eval) {//제품의 평균 만족도 업데이트

	this->evalCount++;
	this->evaluation = (1.0) * (this->evaluation + eval) / this->evalCount;

}