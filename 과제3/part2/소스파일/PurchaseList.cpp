#include<iostream>
#include "PurchaseList.h"
using namespace std;

void PurchaseList::add(Product* prod, string id) {//구매 목록에 제품 리스트 추가
	this->lists[this->size] = prod;
	this->idList[this->size] = id;
	this->size++;
}

void PurchaseList::PrintPurchaseDetails(string id) {//구매한 제품들 상세정보 출력
	for (int i = 0; i < this->size; i++) {
		if (this->idList[i] == id) {
		this->lists[i]->viewDetails();

		}

	}

}