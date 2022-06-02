#include "ProductList.h"
#include <iostream>

int ProductList::getSize() {
	return this->size;

}

Product* ProductList::getProduct(string name) {

	for (int i = 0; i < this->getSize(); i++) {

		if (lists[i]->getName() == name) {
			lists[i]->getDetails();
			break;
		}

	}

}