#include<iostream>
#include "PurchaseList.h"
using namespace std;

void PurchaseList::add(Product* prod, string id) {//���� ��Ͽ� ��ǰ ����Ʈ �߰�
	this->list.push_back(prod);
	this->idList.push_back(id);
	
}

vector<Product*> PurchaseList::PrintPurchaseDetails(string id) {//������ ��ǰ�� ������ ���
	
	vector<Product*> purchaseList;
	for (int i = 0; i < list.size(); i++) {
		if (this->idList[i] == id) {
		purchaseList.push_back(this->list[i]);
		}

	}
	return purchaseList;
}