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

			if (menu2 == 1) {//ȸ������ ���� �Է�
				int blankFind;
				int temp;
				blankFind = input.find(' ', 4);
				string name = input.substr(4, blankFind - 4);//�̸�
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				string Numbers = input.substr(temp, blankFind - temp);//�ֹι�ȣ
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				string id = input.substr(temp, blankFind - temp);//id
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				string passwd = input.substr(temp, blankFind - temp);//��й�ȣ
				

			}
			else if (menu2 == 2) {//ȸ��Ż��


			}

		}
		else if (menu1 == 2) {
			if (menu2 == 1) {//�α���
				int blankFind;
				int temp;
				blankFind = input.find(' ', 4);
				string id = input.substr(4, blankFind - 4);//id
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				string pswd = input.substr(temp, blankFind - temp);//��й�ȣ
				
			}
			else if (menu2 == 2) {//�α׾ƿ�


			}

		}
		else if (menu1 == 3) {
			if (menu2 == 1) {//�Ǹ� �Ƿ� ���
				int blankFind;
				int temp;
				blankFind = input.find(' ', 4);
				string name = input.substr(4, blankFind - 4);//�̸�
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				string company = input.substr(temp, blankFind - temp);//����ȸ��
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				int price = stoi(input.substr(temp, blankFind - temp));//����
				temp = blankFind + 1;
				blankFind = input.find(' ', blankFind + 1);
				int qty = stoi(input.substr(temp, blankFind - temp));//����
				
			}
			else if (menu2 == 2) {//��� ��ǰ ��ȸ


			}
			else if (menu2 == 3) {//�Ǹ� �Ϸ� ��ǰ ��ȸ


			}

		}
		else if (menu1 == 4) {
			if (menu2 == 1) {//��ǰ ���� �˻�
				string name = input.substr(4, input.length() - 4);//��ǰ��

				

			}
			else if (menu2 == 2) {//��ǰ ����

			}
			else if (menu2 == 3) {//��ǰ ���� ���� ��ȸ


			}
			else if (menu2 == 4) {//��ǰ ��� ������ �Է�
				int blankFind;
				int temp;
				blankFind = input.find(' ', 4);
				string name = input.substr(4, blankFind - 4);//��ǰ��
				temp = blankFind;
				blankFind = input.find(' ', blankFind + 1);
				int eval = stoi(input.substr(temp, input.length() - temp));//��� ������
				
			}
		}
		else if (menu1 == 5 && menu2 == 1) {//�Ǹ� ���


		}
		else if (menu1 == 6 && menu2 == 1) {//����



		}



	}
}