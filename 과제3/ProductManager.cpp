#include <iostream>
#include"ProductManager.h"
using namespace std;

void ProductManager::addProduct(Product* product) {

	this->lists[this->size++] = product;

}

void ProductManager::getProducts(Member* member) {

	for (unsigned int i = 0; i < this->size; i++) {
		if (this->lists[i]->getID() == member->getID()) {
			this->lists[i]->viewDetails();
		}

	}
}

int ProductManager::getSize() {// �� ��ǰ�� ���� ���
	return this->size;

}

Product* ProductManager::getProduct(string name) {// name�� �ش��ϴ� ��ǰ ��ȯ

	for (int i = 0; i < this->getSize(); i++) {

		if (lists[i]->getName() == name) {
			return lists[i];
		}
	}

}