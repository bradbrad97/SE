#include<iostream>
#include "PurchaseList.h"
using namespace std;

void PurchaseList::add(Product* prod, string id) {//���� ��Ͽ� ��ǰ ����Ʈ �߰�
	this->lists[this->size] = prod;
	this->idList[this->size] = id;
	this->size++;
}

void PurchaseList::PrintPurchaseDetails(string id) {//������ ��ǰ�� ������ ���
	for (int i = 0; i < this->size; i++) {
		if (this->idList[i] == id) {
		this->lists[i]->viewDetails();

		}

	}

}