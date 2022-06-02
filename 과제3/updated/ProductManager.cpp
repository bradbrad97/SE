#include <iostream>
#include"ProductManager.h"
using namespace std;

vector<Product*> ProductManager::lists;

void ProductManager::addProduct(Product* product) {

	this->lists.push_back(product);

}

vector<Product*> ProductManager::getProducts(Member* member) {
	vector<Product*> lists;
	for (auto it = this->lists.begin(); it < this->lists.end(); it++) {
		if ((*it)->getID() == member->getID() && (*it)->getleftQuantity() != 0) {
			lists.push_back((*it));
		}
	}
	return lists;
}

vector<Product*> ProductManager::getSoldOutProducts(Member* member) {
	vector<Product*> lists;
	for (auto it = this->lists.begin(); it < this->lists.end(); it++) {
		if ((*it)->getID() == member->getID() && (*it)->getleftQuantity() == 0) {
			lists.push_back((*it));
		}
	}
	return lists;
}

int ProductManager::getSize() {// �� ��ǰ�� ���� ���
	return this->size;

}

Product* ProductManager::getProduct(string name) {// name�� �ش��ϴ� ��ǰ ��ȯ

	for (unsigned int i = 0; i < lists.size(); i++) {

		if (lists[i]->getName() == name) {
			return lists[i];
		}
	}

}