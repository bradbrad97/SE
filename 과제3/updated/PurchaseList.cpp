#include<iostream>
#include "PurchaseList.h"
using namespace std;

void PurchaseList::add(Product* prod, string id) {//구매 목록에 제품 리스트 추가
	this->list.push_back(prod);
	this->idList.push_back(id);
	
}

vector<Product*> PurchaseList::PrintPurchaseDetails(string id) {//구매한 제품들 상세정보 출력
	
	vector<Product*> purchaseList;
	for (int i = 0; i < list.size(); i++) {
		if (this->idList[i] == id) {
		purchaseList.push_back(this->list[i]);
		}

	}
	return purchaseList;
}