//#include <iostream>
//#include <conio.h>
//
//using namespace std;
//
//int main() {
//	setlocale(0, "");
//
//	struct Answer
//	{
//		string answ;
//		bool o;
//	};
//
//	struct Question
//	{
//		string text;
//		Answer answers[4];
//	};
//
//	Question arr_q[12] = {
//		{ "��������� ���� ����������������?",
//			{
//				{"Python", false},
//				{"�#", false},
//				{"Ruby", false},
//				{"C++", true}
//			}
//		},
//		{ "���������� ��� ������ ����������� ��������� ������",
//			{
//				{"BOOL", true},
//				{"BYTE", false},
//				{"LOGIC", false},
//				{"SHORT", false}
//			}
//		},
//		{ "���������� ��� ������ ����������� ��������� ������",
//			{
//				{"STRING", false},
//				{"WORD", false},
//				{"CHAR ", true},
//				{"DWORD", false}
//			}
//		},
//		{ "��� ���������� ��������, � ������� �������� ����������� ���� �� ������, �� ����������",
//			{
//				{"�����������", false},
//				{"�������������", false},
//				{"���������������", false},
//				{"�������� ", true}
//			}
//		},
//		{ "������� �������� � ����� �������� ������ �� ���� ����� ������� ������ ������������ ���������",
//			{
//				{"�������", false},
//				{"���������", false},
//				{"���������� ", true},
//				{"������������ �������", false}
//			}
//		},
//		{ "����� �� ����������� ����� ������ ��������� � �������������� ���� ������",
//			{
//				{"float, double", false},
//				{"int, char", false},
//				{"long, short", true},
//				{"float, string", false}
//			}
//		},
//		{ " ��� ���������� ����� ���������� ������, ������� ����� ��� ���� ����� ��������� ���?",
//			{
//				{"���������", false},
//				{"�������", false},
//				{"������", false},
//				{"������", true}
//			}
//		},
//		{ "� ������ ������ ������ ���������� ����� ����� �������� ��������� �������",
//			{
//				{"���������� ���������", true},
//				{"���������� ��������", false},
//				{"�������� ����������", false},
//				{"���������� ��������", false}
//			}
//		},
//		{ "������������ ��� ������ ����������� ��������� ������:",
//			{
//				{"LONG INT", false},
//				{"FLOAT", true},
//				{"SHORT", false},
//				{"Char", false}
//			}
//		},
//		{ "C++ ����?",
//			{
//				{"����������������", false},
//				{"����������", false},
//				{"�������������", true},
//				{"������������", true}
//			}
//		},
//		{ "��� ������� ��������",
//			{
//				{"���� ��", false},
//				{"������ ���� ������-��", true},
//				{"����� ���", false},
//				{"��", false}
//			}
//		},
//		{ "���������� Microsoft",
//			{
//				{"���� �����", true},
//				{"���� �����", false},
//				{"�������� �� �����", false},
//				{"�����������", false}
//			}
//		}
//	};
//
//
//	string name_player = "user";
//	bool check = true;
//	int count_quations = 8;
//	string color = "\x1b[93m";
//
//	while (check) {
//		cout << color;
//		cout << "������ " << name_player << ". ��������� � ��������� �� ���������������� � ������ IT." << endl;
//		int key_input;
//		cout << "[1] - ������ ����" << endl
//			<< "[2] - ���������" << endl
//			<< "[3] - �������" << endl
//			<< "[4] - �����" << endl;
//
//		key_input = _getch();
//
//		if (key_input == 49) {
//			int lives = 3;
//			int coin = 0;
//			bool in_game = true;
//
//			system("cls");
//
//			for (int i = 0; i < count_quations && in_game == true; i++) {
//				cout << "[+] �����: " << name_player << " | �����: " << lives
//					<< " | ����: " << coin << endl;
//				cout << "[" << i << "]" << "������: " << arr_q[i].text << endl;
//				for (int j = 0; j < 4; j++) {
//					cout << "[" << char('A' + j) << "]" << arr_q[i].answers[j].answ << endl;
//				}
//
//				cout << "[+]������ �����: ";
//				key_input = _getch();
//
//				bool stoper = true;
//				while (stoper) {
//					if (key_input == 65 || key_input == 66 || key_input == 67 || key_input == 68) {
//						for (int j = 0; j < 4; j++) {
//							if (key_input == 65 + j) {
//								if (arr_q[i].answers[j].o) {
//									coin += 1;
//									cout << "����� ������! + 1 ����" << endl;
//								}
//								else {
//									lives -= 1;
//									cout << "����� ��������! - 1 �����" << endl;
//									if (lives == 0) {
//										system("cls");
//										cout << "���� ��������" << endl;
//										in_game = false;
//										break;
//									}
//								}
//							}
//						}
//						stoper = false;
//					}
//					if (stoper) {
//						key_input = _getch();
//					}
//
//				}
//
//				system("pause");
//				system("cls");
//
//
//			}
//			if (in_game) {
//				cout << "�� �������! � ���� �������� " << lives << " ������ � " << coin << " �����" << endl;
//				system("pause");
//			}
//
//
//		}
//
//		else if (key_input == 50) {
//			cout << "[1] �������������� ��� ������;" << endl
//				<< "[2] �������������� �������� � ����.����� �������� �� 8 - 10 - 12." << endl
//				<< "[3] �������������� ���� ����������" << endl
//				<< "[4] �����" << endl;
//
//			key_input = _getch();
//			system("cls");
//
//			if (key_input == 49) {
//				cout << "����� ����� ��� ������: ";
//				cin >> name_player;
//			}
//
//			else if (key_input == 50) {
//				cout << "������ ��������: " << count_quations << endl;
//				cout << "�������� ���������� ��������:" << endl
//					<< "[1] 8" << endl
//					<< "[2] 10" << endl
//					<< "[3] 12" << endl;
//				key_input = _getch();
//				if (key_input == 49) {
//					count_quations = 8;
//				}
//				else if (key_input == 50) {
//					count_quations = 10;
//				}
//				else if (key_input == 51) {
//					count_quations = 12;
//				}
//			}
//
//			else if (key_input == 51) {
//				cout << "�������� ����: " << endl
//					<< "[1] �����" << endl
//					<< "[2] �������" << endl
//					<< "[3] �������" << endl
//					<< "[4] �����" << endl;
//				key_input = _getch();
//				if (key_input == 49) {
//					color = "\x1b[93m";
//				}
//				else if (key_input == 50) {
//					color = "\x1b[91m";
//				}
//				else if (key_input == 51) {
//					color = "\x1b[92m";
//				}
//				else if (key_input == 52) {
//					color = "\x1b[94m";
//				}
//			}
//			else if (key_input == 52) {
//				system("cls");
//			}
//		}
//
//
//		else if (key_input == 51) {
//			cout << "- ����� �������� ���� �� ���������� ����� �� ������;" << endl
//				<< "- ����� �������� ������ �� ���������� �����;" << endl
//				<< "- ����� ������ ����� ��� ������������ ������." << endl;
//			system("pause");
//		}
//
//
//		else if (key_input == 52) {
//			check = false;
//		}
//
//		system("cls");
//	}
//	return 0;
//}
//
