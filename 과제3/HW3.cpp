#include <iostream>
#include "HW3.h"
using namespace std;


SignUpUI* SignUp::getUI() {
	return this->signupUI;
}

void SignUp::startInterface(JoinWithdrawl* joinwithdrawl, Login* login) {
	if (this->signupUI == NULL) {

	this->signupUI = new SignUpUI;
	this->signupUI->startInterface(this);
	joinwithdrawl->setMemberStorage(this->memberStorage);
	login->setMemberStorage(this->memberStorage);
	}
}

void SignUp::createNewMember(Member* member) {

	this->memberStorage->add(member);

}

void SignUpUI::startInterface(SignUp* signup) {
	this->signup = signup;
}

void SignUpUI::createNewMember(Member* member) {

	this->signup->createNewMember(member);

}

void Login::setMemberStorage(MemberStorage* memberStorage) {
	this->memberStorage = memberStorage;

}

void Login::startInterface() {
	if (this->loginUI == NULL) {
		this->loginUI = new LoginUI;
		this->loginUI->startInterface(this);
	}
}

void LoginUI::startInterface(Login* login) {

	this->login = login;
}

LoginUI* Login::getUI() {

	return this->loginUI;
}

Member* LoginUI::checkLogin(string id, string pswd) {

	return this->login->checkLogin(id,pswd);

}

Member* Login::checkLogin(string id, string pswd) {

	return this->memberStorage->getMember(id,pswd);

}

Member* MemberStorage::getMember(string id, string pswd) {

		
	for (unsigned int i = 0; i < this->memberList.size(); i++) {
		if (this->memberList[i]->getID() == id 
			&& this->memberList[i]->getPswd() == pswd) {
			
			return this->memberList[i];
		}

	}

}

//Part2


string Product::getID() {
	return this->sellerID;

}

string Product::getName() {// 제품의 이름 반환
	return this->name;
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
	cout << "left : " << this->leftQuantity << endl;

}
void Product::updateEval(int eval) {//제품의 평균 만족도 업데이트

	this->evalCount++;
	this->evaluation = (1.0) * (this->evaluation + eval) / this->evalCount;

}

int ProductManager::getSize() {// 총 제품의 갯수 출력
	return this->size;

}

void ShowSalesList::setProductManager(ProductManager* productManager) {
	this->pm = productManager;

}

Product* ProductManager::getProduct(string name) {// name에 해당하는 제품 반환
	
	for (int i = 0; i < this->getSize(); i++) {
		
		if (lists[i]->getName() == name) {
			return lists[i];
		}
	}

}

AddProductUI* AddProduct::getUI() {

	return this->addProductUI;
}
void AddProductUI::Add(Product* product) {

	this->addProduct->add(product);
}
void AddProduct::add(Product* product) {
	this->pm->addProduct(product);

}

void ShowSalesList::startInterface() {

	if (this->showSalesListUI == NULL) {
		this->showSalesListUI = new ShowSalesListUI;
		this->showSalesListUI->startInterface(this);

	}

}
void ShowSalesList::showList(Member* member) {

	this->pm->getProducts(member);

}

void ShowSalesListUI::startInterface(ShowSalesList* showSalesList) {
	this->showSalesList = showSalesList;

}

void ShowSalesListUI::showList(Member* member) {

	this->showSalesList->showList(member);

}

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

//Part3

void PurchaseList::add(Product* prod) {//구매 목록에 제품 리스트 추가
	this->lists[this->size++] = prod;

}

void PurchaseList::PrintPurchaseDetails() {//구매한 제품들 상세정보 출력
	for (int i = 0; i < this->size; i++) {
		this->lists[i]->viewDetails();
	
	}

}

Product* ProductShow::getProduct(string name) {
	
	return this->pM->getProduct(name);

}

ProductShowUI::ProductShowUI() {


}

ProductShowUI::ProductShowUI(ProductShow* productShow) {
	productShow->psu = this;
	this->ps = productShow;
}
ProductShowUI* ProductShow::getpsu() {
	return this->psu;
}

void ProductShowUI::startInterface(ProductShow* productshow) {
	this->ps = productshow;
}


Product* ProductShowUI::searchProduct(string name) {
	return this->ps->getProduct(name);
}


void Buy::purchase(Product* product) {
	
	product->reduceQty();

}
void BuyUI::startInterface(Buy* buy) {

	this->buy = buy;

}
BuyUI* Buy::getUI() {

	return this->bU;
}

void BuyUI::purchase(Product* product,Member* member) {
	
	this->buy->purchase(product);

}

void Buy::startInterface() {
	if (this->bU == NULL) {
		this->bU = new BuyUI;
		this->bU->startInterface(this);

	}

}

ViewPurchaseHistoryUI* ViewPurchaseHistory::getUI() {
	return this->vphUI;

}

void ViewPurchaseHistory::startInterface() {

	if (this->vphUI == NULL) {
		this->vphUI = new ViewPurchaseHistoryUI;
		this->vphUI->startInterface(this);

	}

}

void ViewPurchaseHistory::viewHistory() {
	this->pcl->PrintPurchaseDetails();
}

void ViewPurchaseHistoryUI::startInterface(ViewPurchaseHistory* viewPurchaseHistory) {

	this->vh = viewPurchaseHistory;
}

void ViewPurchaseHistoryUI::viewHistory() {
	this->vh->viewHistory();

}

void Evaluate::evaluate(string name, int eval) {

	Product* product = this->pm->getProduct(name);
	product->updateEval(eval);

}



void EvaluateUI::evaluate(string name, int eval) {

	this->eva->evaluate(name, eval);

}

Member::Member(string memberName,
	string memberSocialNum,
	string memberID,
	string memberPW) {
	this->memberName = memberName;
	this->memberSocialNum = memberSocialNum;
	this->memberID = memberID;
	this->memberPW = memberPW;

}

string Member::getID() {

	return this->memberID;

}

string Member::getPswd() {

	return this->memberPW;

}

vector<Product> Member::getList() {
	return this->purchaseList;

}

void MemberStorage::add(Member* member) {

	this->memberList.push_back(member);

}

void MemberStorage::erase(Member* member) {
	vector<Member*>::iterator it;
	for (it = this->memberList.begin(); it != this->memberList.end(); it++) {
		if ((*it)->getID() == member->getID()) {
			this->memberList.erase(it);
			break;
		}

	}

}

MemberStorage* SignUp::getMemberStorage() {
	return this->memberStorage;
}

MemberStorage* JoinWithdrawl::getMemberStorage() {
	return this->memberStorage;
}

void JoinWithdrawl::setMemberStorage(MemberStorage* memberStorage) {

	this->memberStorage = memberStorage;

}

void JoinWithdrawl::startInterface() {
	if (this->joinWithdrawlUI == NULL) {
		this->joinWithdrawlUI = new JoinWithdrawlUI;
		this->joinWithdrawlUI->startInterface(this);
	}

}

JoinWithdrawlUI* JoinWithdrawl::getUI() {

	return this->joinWithdrawlUI;

}

void JoinWithdrawlUI::joinWithdraw(Member* member) {

	this->joinWithdrawl->getMemberStorage()->erase(member);

}

void JoinWithdrawlUI::startInterface(JoinWithdrawl* joinWithdrawl) {

	this->joinWithdrawl = joinWithdrawl;
}

void AddProductUI::startInterface(AddProduct* addProduct) {

	this->addProduct = addProduct;

}

void AddProduct::startInterface(ShowSalesList* showSalesList,
	ProductShow* productShow, Evaluate* evaluate){

	if (this->addProductUI == NULL) {
		this->addProductUI = new AddProductUI;
		this->addProductUI->startInterface(this);
		showSalesList->setProductManager(this->pm);
		productShow->setProductManager(this->pm);
		evaluate->setProductManager(this->pm);
	}
}

void ProductShow::setProductManager(ProductManager* productManager) {

	this->pM = productManager;

}

ShowSalesListUI* ShowSalesList::getUI() {

	return this->showSalesListUI;

}

void Evaluate::startInterface() {
	if (this->evu == NULL) {

		this->evu = new EvaluateUI;
		this->evu->startInterface(this);
	}

}

void Evaluate::setProductManager(ProductManager* productManager) {
	this->pm = productManager;
}

void EvaluateUI::startInterface(Evaluate* evaluate) {

	this->eva = evaluate;

}

EvaluateUI* Evaluate::getUI() {

	return this->evu;

}