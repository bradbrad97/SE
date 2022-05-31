#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

	

	ifstream in_fp("input.txt");
	string input;
	
	
	while (!in_fp.eof()) {

		getline(in_fp, input);

		int menu1 = stoi(input.substr(0, 1));
		int menu2 = stoi(input.substr(2, 1));

		if (menu1 == 1) {

			if (menu2 == 1) {//회원가입 정보 입력
				int blankFind;
				int temp;
				blankFind = input.find(' ', 4);
				string name = input.substr(4, blankFind - 4);//이름
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				string Numbers = input.substr(temp, blankFind - temp);//주민번호
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				string id = input.substr(temp, blankFind - temp);//id
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				string passwd = input.substr(temp, blankFind - temp);//비밀번호
				

			}
			else if (menu2 == 2) {//회원탈퇴


			}

		}
		else if (menu1 == 2) {
			if (menu2 == 1) {//로그인
				int blankFind;
				int temp;
				blankFind = input.find(' ', 4);
				string id = input.substr(4, blankFind - 4);//id
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				string pswd = input.substr(temp, blankFind - temp);//비밀번호
				
			}
			else if (menu2 == 2) {//로그아웃


			}

		}
		else if (menu1 == 3) {
			if (menu2 == 1) {//판매 의류 등록
				int blankFind;
				int temp;
				blankFind = input.find(' ', 4);
				string name = input.substr(4, blankFind - 4);//이름
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				string company = input.substr(temp, blankFind - temp);//제조회사
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				int price = stoi(input.substr(temp, blankFind - temp));//가격
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				int qty = stoi(input.substr(temp, blankFind - temp));//수량
				
			}
			else if (menu2 == 2) {//등록 상품 조회


			}
			else if (menu2 == 3) {//판매 완료 상품 조회


			}

		}
		else if (menu1 == 4) {
			if (menu2 == 1) {//상품 정보 검색
				string name = input.substr(4, input.length() - 4);//상품명

				

			}
			else if (menu2 == 2) {//상품 구매

			}
			else if (menu2 == 3) {//상품 구매 내역 조회


			}
			else if (menu2 == 4) {//상품 평균 만족도 입력
				int blankFind;
				int temp;
				blankFind = input.find(' ', 4);
				string name = input.substr(4, blankFind - 4);//상품명
				temp = blankFind;
				blankFind = input.find(' ', blankFind + 1);
				int eval = stoi(input.substr(temp, input.length() - temp));//평균 만족도
				
			}
		}
		else if (menu1 == 5 && menu2 == 1) {//판매 통계


		}
		else if (menu1 == 6 && menu2 == 1) {//종료



		}



	}
}