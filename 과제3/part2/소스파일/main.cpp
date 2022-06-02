#include "AddProduct.h"
#include "Signup.h"
#include"ViewPurchaseHistory.h"
#include "Buy.h"
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


	ProductShow* ps = new ProductShow;
	ProductManager* pm = new ProductManager;
	MemberStorage* memberStorage = new MemberStorage;
	Login* login = new Login;
	JoinWithdrawl* joinWithdrawl = new JoinWithdrawl;
	AddProduct* addProduct = new AddProduct;
	ShowSalesList* showSalesList = new ShowSalesList;
	ViewPurchaseHistory* vph = new ViewPurchaseHistory;
	Evaluate* evaluate = new Evaluate;
	Buy* buy = new Buy;
	Product* findProduct;
	Member* findMember;

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
				signup->startInterface(joinWithdrawl, login);
				signup->getUI()->createNewMember(findMember);
				out_fp << "1.1. 회원가입" << endl;

				out_fp << name << " " << Numbers << " " << id
					<< " " << passwd << endl;
			}
			else if (menu2 == 2) {

				joinWithdrawl->startInterface();
				joinWithdrawl->getUI()->joinWithdraw(findMember);
				out_fp << "1.2. 회원탈퇴" << endl;
				out_fp << findMember->getID() << endl;
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
				login->startInterface();
				findMember = login->getUI()->checkLogin(id, pswd);
				out_fp << "2.1. 로그인" << endl;
				out_fp << findMember->getID() << " " << findMember->getPswd() << endl;
			}
			else if (menu2 == 2) {//로그아웃 부분 미구현

				findMember = NULL;
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
				addProduct->startInterface(showSalesList, ps, evaluate);
				addProduct->getUI()->Add(products);
				out_fp << "3.1. 판매 의류 등록" << endl;
				out_fp << name << " " << company << " " << price << " " << qty << endl;

			}
			else if (menu2 == 2) {

				out_fp << "3.2. 등록 상품 조회" << endl;
				showSalesList->startInterface();
				showSalesList->getUI()->showList(findMember);
				

			}
			else if (menu2 == 3) {

			}

		}
		else if (menu1 == 4) {
			if (menu2 == 1) {
				string name = input.substr(4, input.length() - 4);

				ProductShowUI* ui = new ProductShowUI(ps);

				ps->getpsu()->startInterface(ps);

				findProduct = ps->getpsu()->searchProduct(name);
				findProduct->viewDetails();

			}
			else if (menu2 == 2) {
				buy->startInterface(vph);
				buy->getUI()->purchase(findProduct, findMember);
				out_fp << "4.2. 상품 구매" << endl;
				out_fp << findProduct->getID() << " " << findProduct->getName() << endl;
			}
			else if (menu2 == 3) {
				vph->startInterface();
				
				vph->getUI()->viewHistory(findMember->getID());
				out_fp << "4.3. 상품 구매 만족도 평가" << endl;
			}
			else if (menu2 == 4) {
				int blankFind;
				int temp;
				blankFind = input.find(' ', 4);
				string name = input.substr(4, blankFind - 4);
				temp = blankFind;
				blankFind = input.find(' ', blankFind + 1);
				int eval = stoi(input.substr(temp, input.length() - temp));
				evaluate->startInterface();
				evaluate->getUI()->evaluate(name, eval);
				out_fp << "4.4. 상품 구매 만족도 평가" << endl;
				out_fp << name << " " << eval << endl;
			}
		}
		else if (menu1 == 5 && menu2 == 1) {
			out_fp << "5.1. 판매 상품 통계" << endl;


		}
		else if (menu1 == 6 && menu2 == 1) {
			out_fp << "6.1. 종료" << endl;

			
			break;
		}



	}
}