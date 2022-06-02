#include "AddProduct.h"
#include "Signup.h"
#include"ViewPurchaseHistory.h"
#include "Buy.h"
#include "Logout.h"
#include "GetSoldOutProduct.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main() {

	ifstream File("input.txt");
	ifstream in_fp("input.txt");
	ofstream out_fp("output.txt");
	string input;
	SignUp* signup = new SignUp;
	

	ProductShow* productShow = new ProductShow;
	ProductManager* productManager = new ProductManager;
	MemberStorage* memberStorage = new MemberStorage;
	Login* login = new Login;
	Logout* logout = new Logout;
	JoinWithdrawl* joinWithdrawl = new JoinWithdrawl;
	AddProduct* addProduct = new AddProduct;
	ShowSalesList* showSalesList = new ShowSalesList;
	GetSoldOutProduct* getSoldOutProduct = new GetSoldOutProduct;
	ViewPurchaseHistory* viewPurchaseHistory = new ViewPurchaseHistory;
	PurchaseList* purchaseList = new PurchaseList;
	Evaluate* evaluate = new Evaluate;
	Buy* buy = new Buy;
	Product* findProduct = NULL;
	Member* findMember = NULL;
	signup->setMemberStorage(memberStorage);
	joinWithdrawl->setMemberStorage(memberStorage);
	login->setMemberStorage(memberStorage);
	addProduct->setProductManager(productManager);
	productShow->setProductManager(productManager);
	evaluate->setProductManager(productManager);
	showSalesList->setProductManager(productManager);
	getSoldOutProduct->setProductManager(productManager);
	buy->setPurchaseList(purchaseList);
	viewPurchaseHistory->setPurchaseList(purchaseList);
	while (!in_fp.eof()) {

		getline(in_fp, input);

		int menu1 = stoi(input.substr(0, 1));
		int menu2 = stoi(input.substr(2, 1));

		if (menu1 == 1) {

			if (menu2 == 1) {
				int blankFind;
				int temp;
				blankFind = input.find(' ', 4);
				string name = input.substr(4, blankFind - 4);
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				string Numbers = input.substr(temp, blankFind - temp);
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				string id = input.substr(temp, blankFind - temp);
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				string passwd = input.substr(temp, blankFind - temp);
				findMember = new Member(name, Numbers, id, passwd);
				
				signup->getUI()->createNewMember(findMember, out_fp);
				

				
			}
			else if (menu2 == 2) {

			
				joinWithdrawl->getUI()->joinWithdraw(findMember,out_fp);
				
			}

		}
		else if (menu1 == 2) {
			if (menu2 == 1) {
				int blankFind;
				int temp;
				blankFind = input.find(' ', 4);
				string id = input.substr(4, blankFind - 4);
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				string pswd = input.substr(temp, blankFind - temp);
				
				findMember = login->getUI()->checkLogin(id, pswd, out_fp);
				
			}
			else if (menu2 == 2) {
				logout->getUI()->logoff(findMember,out_fp);
				
			}

		}
		else if (menu1 == 3) {
			if (menu2 == 1) {
				int blankFind;
				int temp;
				blankFind = input.find(' ', 4);
				string name = input.substr(4, blankFind - 4);
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				string company = input.substr(temp, blankFind - temp);
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				int price = stoi(input.substr(temp, blankFind - temp));
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				int qty = stoi(input.substr(temp, blankFind - temp));
				Product* products = new Product(findMember->getID(),
					name, company, price, qty, qty);
				
				addProduct->getUI()->Add(products, out_fp);
				

			}
			else if (menu2 == 2) {
				showSalesList->getUI()->showList(findMember,out_fp);
			}
			else if (menu2 == 3) {//판매 완료 상품 조회
				getSoldOutProduct->getUI()->showSoldOutList(findMember, out_fp);
			}

		}
		else if (menu1 == 4) {
			if (menu2 == 1) {
				string name = input.substr(4, input.length() - 4);
				
				findProduct = productShow->getpsu()->searchProduct(name,out_fp);
				

			}
			else if (menu2 == 2) {
				
				buy->getUI()->purchase(findProduct, findMember, out_fp);
				
			}
			else if (menu2 == 3) {
				
				
				viewPurchaseHistory->getUI()->viewHistory(findMember->getID(),out_fp);
				
			}
			else if (menu2 == 4) {
				int blankFind;
				int temp;
				blankFind = input.find(' ', 4);
				string name = input.substr(4, blankFind - 4);
				temp = blankFind;
				blankFind = input.find(' ', blankFind + 1);
				int eval = stoi(input.substr(temp, input.length() - temp));
				
				evaluate->getUI()->evaluate(name, eval,out_fp);
				
			}
		}
		else if (menu1 == 5 && menu2 == 1) {//판매 상품 통계
			out_fp << "5.1. 판매 상품 통계" << endl;


		}
		else if (menu1 == 6 && menu2 == 1) {//구현해야할지 모르겠어서 일단 냅두었습니다.
			out_fp << "6.1. 종료" << endl;
			break;
		}



	}
}