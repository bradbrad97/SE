#pragma once
#include <iostream>
#include <vector>
using namespace std;
//�ڵ� ���� ���: Boundary Ŭ������ Control Ŭ������ ���� ��ü�� �ְ����
//main���� control Ŭ�������� startInterface() ȣ���� �� Boundary Ŭ������ 
// Control Ŭ������ ���� ��ü �ְ�ޱ�
// ��� �Լ� ȣ���� Boundary Ŭ�������� ����

//Part1
class Product;
class Member;
class MemberStorage;
class SignUpUI;
class SignUp;
class JoinWithdrawlUI;
class JoinWithdrawl;
class LoginUI;
class Login;


//Part2
class ProductManager;
class ProductList;
class ProductShow;
class ProductShowUI;
class AddProduct;
class AddProductUI;
class ShowSalesList;
class ShowSalesListUI;
class GetSoldOutProduct;
class GetSoldOutProductUI;


//Part3
class Buy;
class BuyUI;
class ViewPurchaseHistoryUI;
class ViewPurchaseHistory;
class PurchaseList;
class Evaluate;
class EvaluateUI;


//��ǰ Ŭ����

class MemberStorage {

public:
	vector<Member*> memberList;
	void add(Member*);
	void erase(Member*);
	Member* getMember(string id, string pswd);
};

class Member {

	string memberName;
	string memberSocialNum;
	string memberID;
	string memberPW;
	vector<Product> purchaseList;
	vector<Product> getList();
public:
	Member() {
	
	};
	Member(string memberName,
		string memberSocialNum,
		string memberID,
		string memberPW);
	string getID();
	string getPswd();
	
};
class SignUp {
	MemberStorage* memberStorage = new MemberStorage;
	SignUpUI* signupUI = NULL;
public:
	void startInterface(JoinWithdrawl*, Login*);
	void createNewMember(Member* member);
	MemberStorage* getMemberStorage();
	SignUpUI* getUI();
};

class SignUpUI {
	SignUp* signup;
public:
	void startInterface(SignUp*);
	void createNewMember(Member* member);

};

class JoinWithdrawl {
	MemberStorage* memberStorage;
	JoinWithdrawlUI* joinWithdrawlUI = NULL;
public:
	void startInterface();
	MemberStorage* getMemberStorage();
	void setMemberStorage(MemberStorage*);
	JoinWithdrawlUI* getUI();
};

class JoinWithdrawlUI {
	JoinWithdrawl* joinWithdrawl;
public:
	void startInterface(JoinWithdrawl*);
	void joinWithdraw(Member*);
};
class Login {

private:
	LoginUI* loginUI = NULL;
	MemberStorage* memberStorage;
public:
	void startInterface();
	void setMemberStorage(MemberStorage*);
	LoginUI* getUI();
	Member* checkLogin(string id, string pswd);
};

class LoginUI {

private:
	Login* login;
public:

	void startInterface(Login*);
	Member* checkLogin(string id, string pswd);
};


class Product {
private:
	//attribute
	string name;
	string sellerID;
	string companyName;
	int price;
	double evaluation = 0;
	int evalCount = 0;
	int leftQuantity;
	int initialQuantity;
public:
	Product() {};
	Product(string sellerID, string name, string companyName, int price
		, int leftQuantity, int initialQuantity) {
		this->sellerID = sellerID;
		this->name = name;
		this->companyName = companyName;

		this->price = price;
		this->leftQuantity = leftQuantity;
		this->initialQuantity = initialQuantity;

	}
	string getID();
	string getName();
	void getSimpleInfos();
	void viewDetails();
	void reduceQty();
	void updateEval(int eval);
};

class ProductManager {
public:
	int size = 0;
	Product** lists = new Product * [1000];
	Product* getProduct(string name);
	void addProduct(Product*);
	void getProducts(Member*);
	int getSize();
};



class AddProduct {
private:
	AddProductUI* addProductUI = NULL;
	ProductManager* pm = new ProductManager;
public:
	void startInterface(ShowSalesList*, ProductShow*,Evaluate*);
	AddProductUI* getUI();
	void add(Product* product);
};

class AddProductUI {

private:
	AddProduct* addProduct;
public:
	void startInterface(AddProduct*);
	void Add(Product* product);
};


class ShowSalesList {
	
	ShowSalesListUI* showSalesListUI = NULL;
	ProductManager* pm;
public:
	void startInterface();
	ShowSalesListUI* getUI();
	void showList(Member* member);
	void setProductManager(ProductManager* productManager);
};

class ShowSalesListUI {
	ShowSalesList* showSalesList;
public:
	void startInterface(ShowSalesList* showSalesList);
	void showList(Member* member);

};
class GetSoldOutProduct {



};

class GetSoldOutProductUI {



};

//��ǰ ��� ����

//���� ��� Ŭ����
class PurchaseList {
	string* id = new string[1000];
	Product** lists = new Product *[1000];

public:

	int size = 0;
	void PrintPurchaseDetails();
	void add(Product*);
};
//ProductShow ��Ʈ�� Ŭ����
class ProductShow {
private:
public:
	ProductManager* pM = new ProductManager;
	ProductShowUI* psu;
	Product* getProduct(string name);
	void setProductManager(ProductManager*);
	ProductShowUI* getpsu();
};

class ProductShowUI {
private:
	ProductShow* ps;
public:
	ProductShowUI(ProductShow*);
	ProductShowUI();
	void startInterface(ProductShow*);
	Product* searchProduct(string name);
};

class Buy {
private:
	PurchaseList* pl;
public:
	BuyUI* bU = NULL;
	void purchase(Product*);
	BuyUI* getUI();
	void startInterface();

};

class BuyUI {

private:
	Buy* buy;
public:
	void purchase(Product* product,Member* member);
	void startInterface(Buy*);

};


class ViewPurchaseHistory {
private:
	PurchaseList* pcl;
	ViewPurchaseHistoryUI* vphUI = NULL;
	PurchaseList* purchaseList;
public:
	void viewHistory();
	void startInterface();
	ViewPurchaseHistoryUI* getUI();
};

class ViewPurchaseHistoryUI {

private:
	ViewPurchaseHistory* vh;
public:
	void startInterface(ViewPurchaseHistory*);
	void viewHistory();

};

class Evaluate {
	public:
	EvaluateUI* evu = NULL;
	ProductManager* pm;
	void evaluate(string name, int eval);
	void startInterface();
	void setProductManager(ProductManager*);
	EvaluateUI* getUI();
};

class EvaluateUI {
public:
	Evaluate* eva;
	void startInterface(Evaluate*);
	void evaluate(string name, int eval);
};