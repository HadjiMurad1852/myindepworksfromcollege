//#include <iostream>
//#include <conio.h>
//#include <windows.h> 
//#include <iomanip>
//#include <ctime>
//using namespace std;
//
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int key, key2, key3;
//	int q = 1, xod = 0, comp = 0;
//	int score1 = 0, score2 = 0, score_pc = 0;
//	int win1 = 0, win2 = 0, win_pc = 0;
//	int lose1 = 0, lose2 = 0, lose_pc = 0;
//	int draw1 = 0, draw2 = 0, draw_pc = 0;
//	int score_player1 = 0, score_player2 = 0;
//	const string C_GRAY = "\x1b[90m";
//	const string C_RED = "\x1b[91m";
//	const string C_PURPLE = "\x1b[95m";
//	const string C_YELLOW = "\x1b[93m";
//	const string C_BLUE = "\x1b[94m";
//	const string C_WHITE = "\x1b[97m";
//	const string C_GREEN = "\x1b[92m";
//	const string C_Bir = "\x1b[96m";
//	string color_name1 = "�����";
//	string color_name2 = "�����";
//	string color_player1 = "\x1b[97m";
//	string color_player2 = "\x1b[97m";
//	string player_name1 = "����� 1";
//	string player_name2 = "����� 2";
//	string figure1 = "X";
//	string figure2 = "O";
//
//	while (true) {
//		string game[3][3] = {
//		{" "," "," "},
//		{" "," "," "},
//		{" "," "," "}
//		};
//		cout << "[+] ��������� - ��������� ������\n\n";
//		cout << "[1] ������ ����\n";
//		cout << "[2] ����������\n";
//		cout << "[3] ���������\n";
//		cout << "[4] �����\n\n";
//		key = _getch();
//		if (key == 49) {
//			system("cls");
//			cout << "�������� ������\n\n[1] ��������� ����\n[2] ��� ������\n[3] �����";
//			key2 = _getch();
//			if (key2 == 49) {
//				comp = 1;
//			}
//			else if (key2 == 50) {
//				comp = 0;
//			}
//			else if (key2 == 51) {
//				system("cls");
//				continue;
//			}
//			while (true) {
//				system("cls");
//				if (q % 2 != 0 and comp == 0) {
//					cout << "����� ���������� � ����!\t ���������� � ��������� ����:\n";
//					cout << "������ ���: " << color_player1 << player_name1 << C_WHITE << "\t\t �����: " << color_player2 << player_name2 << C_WHITE << " ��� �� ������: " << C_GRAY << xod << C_WHITE << "\n\n";
//				}
//				else if (q % 2 != 0 and comp == 1) {
//					cout << "����� ���������� � ����!\t ���������� � ��������� ����:\n";
//					cout << "������ ���: " << color_player1 << player_name1 << C_WHITE << "\t\t �����: " << color_player2 << "Bot_Askhab" << C_WHITE << " ��� �� ������: " << C_GRAY << xod << C_WHITE << "\n\n";
//				}
//				else if (q % 2 == 0 and comp == 0) {
//					cout << "����� ���������� � ����!\t ���������� � ��������� ����:\n";
//					cout << "������ ���: " << color_player2 << player_name2 << C_WHITE << "\t\t �����: " << color_player1 << player_name1 << C_WHITE << " ��� �� ������: " << C_GRAY << xod << C_WHITE << "\n\n";
//				}
//				else if (q % 2 == 0 and comp == 1) {
//					cout << "����� ���������� � ����!\t ���������� � ��������� ����:\n";
//					cout << "������ ���: " << color_player2 << "Bot_Askhab" << C_WHITE << "\t\t �����: " << color_player1 << player_name1 << C_WHITE << " ��� �� ������: " << C_GRAY << xod << C_WHITE << "\n\n";
//				}
//				int x = 0, v = 0;
//				for (int i = 0; i < 5; i++) {
//					cout << "\t"; \
//						if (i % 2 == 0) {
//							for (int p = 0; p < 5; p++) {
//								if (p % 2 == 0) {
//									cout << " " << game[x][v];
//									v++;
//								}
//								else if (p % 2 != 0) {
//									cout << " " << "|";
//								}
//							}
//							cout << "\n";
//							x++;
//							v = 0;
//						}
//						else if (i % 2 != 0) {
//							for (int p = 0; p < 5; p++) {
//								cout << " " << "-";
//							}
//							cout << "\n";
//						}
//
//				}
//				cout << "\n������� ����� ������ ���� ������ ��������� ���� ������:\n";
//				if (q % 2 != 0) {
//					key3 = _getch();
//				}
//				else if (q % 2 == 0 and comp == 1) {
//					while (true) {
//						srand(time(NULL));
//						key3 = rand() % 9 + 49;
//						if (key3 == 49 and game[0][0] == " ") {
//							break;
//						}
//						else if (key3 == 50 and game[0][1] == " ") {
//							break;
//						}
//						else if (key3 == 51 and game[0][2] == " ") {
//							break;
//						}
//						else if (key3 == 52 and game[1][0] == " ") {
//							break;
//						}
//						else if (key3 == 53 and game[1][1] == " ") {
//							break;
//						}
//						else if (key3 == 54 and game[1][2] == " ") {
//							break;
//						}
//						else if (key3 == 55 and game[2][0] == " ") {
//							break;
//						}
//						else if (key3 == 56 and game[2][1] == " ") {
//							break;
//						}
//						else if (key3 == 57 and game[2][2] == " ") {
//							break;
//						}
//
//					}
//				}
//				else {
//					key3 = _getch();
//				}
//				system("cls");
//				switch (key3) {
//				case 49:
//					if (q % 2 != 0 and game[0][0] == " ") {
//						game[0][0] = color_player1 + figure1 + C_WHITE;
//						q++; xod = 1;
//					}
//					else if (q % 2 == 0 and game[0][0] == " ") {
//						game[0][0] = color_player2 + figure2 + C_WHITE;
//						q++; xod = 1;
//					}
//					break;
//				case 50:
//					if (q % 2 != 0 and game[0][1] == " ") {
//						game[0][1] = color_player1 + figure1 + C_WHITE;
//						q++; xod = 2;
//					}
//					else if (q % 2 == 0 and game[0][1] == " ") {
//						game[0][1] = color_player2 + figure2 + C_WHITE;
//						q++; xod = 2;
//					}
//					break;
//				case 51:
//					if (q % 2 != 0 and game[0][2] == " ") {
//						game[0][2] = color_player1 + figure1 + C_WHITE;
//						q++; xod = 3;
//					}
//					else if (q % 2 == 0 and game[0][2] == " ") {
//						game[0][2] = color_player2 + figure2 + C_WHITE;
//						q++; xod = 3;
//					}
//					break;
//				case 52:
//					if (q % 2 != 0 and game[1][0] == " ") {
//						game[1][0] = color_player1 + figure1 + C_WHITE;
//						q++; xod = 4;
//					}
//					else if (q % 2 == 0 and game[1][0] == " ") {
//						game[1][0] = color_player2 + figure2 + C_WHITE;
//						q++; xod = 4;
//					}
//					break;
//				case 53:
//					if (q % 2 != 0 and game[1][1] == " ") {
//						game[1][1] = color_player1 + figure1 + C_WHITE;
//						q++; xod = 5;
//					}
//					else if (q % 2 == 0 and game[1][1] == " ") {
//						game[1][1] = color_player2 + figure2 + C_WHITE;
//						q++; xod = 5;
//					}
//					break;
//				case 54:
//					if (q % 2 != 0 and game[1][2] == " ") {
//						game[1][2] = color_player1 + figure1 + C_WHITE;
//						q++; xod = 6;
//					}
//					else if (q % 2 == 0 and game[1][2] == " ") {
//						game[1][2] = color_player2 + figure2 + C_WHITE;
//						q++; xod = 6;
//					}
//					break;
//				case 55:
//					if (q % 2 != 0 and game[2][0] == " ") {
//						game[2][0] = color_player1 + figure1 + C_WHITE;
//						q++; xod = 7;
//					}
//					else if (q % 2 == 0 and game[2][0] == " ") {
//						game[2][0] = color_player2 + figure2 + C_WHITE;
//						q++; xod = 7;
//					}
//					break;
//				case 56:
//					if (q % 2 != 0 and game[2][1] == " ") {
//						game[2][1] = color_player1 + figure1 + C_WHITE;
//						q++; xod = 8;
//					}
//					else if (q % 2 == 0 and game[2][1] == " ") {
//						game[2][1] = color_player2 + figure2 + C_WHITE;
//						q++; xod = 8;
//					}
//					break;
//				case 57:
//					if (q % 2 != 0 and game[2][2] == " ") {
//						game[2][2] = color_player1 + figure1 + C_WHITE;
//						q++; xod = 9;
//					}
//					else if (q % 2 == 0 and game[2][2] == " ") {
//						game[2][2] = color_player2 + figure2 + C_WHITE;
//						q++; xod = 9;
//					}
//					break;
//				}
//				if (game[0][0] == game[0][1] and game[0][1] == game[0][2] and game[0][0] != " " or
//					game[1][0] == game[1][1] and game[1][1] == game[1][2] and game[1][0] != " " or
//					game[2][0] == game[2][1] and game[2][1] == game[2][2] and game[2][0] != " " or
//					game[0][0] == game[1][0] and game[1][0] == game[2][0] and game[0][0] != " " or
//					game[0][1] == game[1][1] and game[1][1] == game[2][1] and game[0][1] != " " or
//					game[0][2] == game[1][2] and game[1][2] == game[2][2] and game[0][2] != " " or
//					game[0][0] == game[1][1] and game[1][1] == game[2][2] and game[0][0] != " " or
//					game[0][2] == game[1][1] and game[1][1] == game[2][0] and game[0][2] != " ") {
//					system("cls");
//					cout << "���� �����������\n";
//					if (q % 2 == 0) {
//						cout << "�������\n�����: " << color_player1 << player_name1 << C_WHITE;
//						cout << "\n�� ������� 5 �����\n\n";
//						score1 = score1 + 5; win1++;
//						Sleep(100);
//						if (comp == 0) {
//							cout << "��������\n�����: " << color_player2 << player_name2 << C_WHITE << "\n������� 6 �����\n\n";
//							score2 = score2 - 6; lose2++;
//							Sleep(100);
//						}
//						else if (comp == 1) {
//							cout << "��������\n���� " << color_player2 << "Bot_Askhab" << C_WHITE << "\n������� 6 �����\n\n";
//							score_pc = score_pc - 6; lose_pc++;
//							Sleep(100);
//						}
//					}
//					else if (q % 2 != 0) {
//						if (comp == 0) {
//							cout << "�������\n�����: " << color_player2 << player_name2 << C_WHITE;
//							cout << "\n�� ������� 5 �����\n\n";
//							score2 = score2 + 5; win2++;
//							Sleep(100);
//						}
//						else if (comp == 1) {
//							cout << "�������\n���� " << color_player2 << "Bot_Askhab" << C_WHITE << "\n������� 5 �����\n\n";
//							score_pc = score_pc + 5; win_pc++;
//							Sleep(100);
//						}
//						cout << "��������\n�����: " << color_player1 << player_name1 << C_WHITE << "\n������� 6 �����\n\n";
//						score1 = score1 - 6; lose1++;
//						Sleep(100);
//					}
//					break;
//				}
//				else if (game[0][0] != " " and game[0][1] != " " and game[0][2] != " " and
//					game[1][0] != " " and game[1][1] != " " and game[1][2] != " " and
//					game[2][0] != " " and game[2][1] != " " and game[2][2] != " ") {
//					cout << "� ��� �����\n\n";
//					cout << "�����: " << color_player1 << player_name1 << C_WHITE;
//					cout << "\n������� 1 ����\n\n";
//					score1 = score1 - 1; draw1++;
//					Sleep(100);
//					if (comp == 0) {
//						cout << "�����: " << color_player2 << player_name2 << C_WHITE;
//						cout << "\n������� 1 ����\n\n";
//						score2 = score2 - 1; draw2++;
//						break;
//					}
//					else {
//						cout << "����: " << C_WHITE << "Bot_Askhab" << C_WHITE;
//						cout << "\n������� 1 ����\n\n";
//						score_pc = score_pc - 1; draw_pc++;
//						break;
//					}
//				}
//
//			}
//			system("pause");
//			system("cls");
//		}
//		else if (key == 50) {
//			system("cls");
//			cout << "���������� ����\n\t\t" << C_GREEN << "W\t" << C_WHITE << C_RED << "L\t" << C_WHITE << C_GRAY << "D\t" << C_WHITE << "|\t ����\n";
//			cout << color_player1 << player_name1 << C_WHITE << "\t\t" << win1 << "\t" << lose1 << "\t" << draw1 << "\t|\t " << score1 << "\n";
//			cout << color_player2 << player_name2 << C_WHITE << "\t\t" << win2 << "\t" << lose2 << "\t" << draw2 << "\t|\t " << score2 << "\n";
//			cout << C_WHITE << "Bot_Askhab" << C_WHITE << "\t" << win_pc << "\t" << lose_pc << "\t" << draw_pc << "\t|\t " << score_pc << "\n\n";
//			system("pause");
//		}
//		else if (key == 51) {
//			while (true) {
//				system("cls");
//				cout << "[+] ��������� ������\n\n";
//				cout << "[1] ����� 1\n";
//				cout << "[2] ����� 2\n";
//				cout << "[3] �����" << "\n\n";
//				cout << "[+] ����: ";
//				key = _getch();
//				if (key == 49) {
//					system("cls");
//					while (true) {
//						cout << "[+] ��������� ������ " << C_Bir << "1\n\n" << C_WHITE;
//						cout << left << setw(16) << "[1] ���" << ": " << C_GRAY << player_name1 << C_WHITE << "\n";
//						cout << left << setw(16) << "[2] ������" << ": " << C_GRAY << figure1 << C_WHITE << "\n";
//						cout << left << setw(16) << "[3] ����" << ": " << color_player1 << color_name1 << C_WHITE << "\n";
//						cout << left << setw(16) << "[4] �����" << "\n\n";
//						cout << "[+] ����: ";
//						key2 = _getch();
//						if (key2 == 49) {
//							system("cls");
//							cout << "������� ���: ";
//							cin >> player_name1;
//							system("cls");
//
//						}
//						else if (key2 == 50) {
//							system("cls");
//							cout << "������� ������: ";
//							cin >> figure1;
//							system("cls");
//
//						}
//						else if (key2 == 51) {
//							system("cls");
//							while (true) {
//								cout << "[+] �������� ����\n\n";
//								cout << "[1] �������\n";
//								cout << "[2] ����������\n";
//								cout << "[3] ������\n";
//								cout << "[4] �����\n";
//								cout << "[5] �����\n";
//								cout << "[6] �������\n";
//								cout << "[7] ���������\n";
//								key3 = _getch();
//								if (key3 == 49) {
//									system("cls");
//									color_name1 = "�������";
//									color_player1 = C_RED;
//									break;
//								}
//								else if (key3 == 50) {
//									system("cls");
//									color_name1 = "����������";
//									color_player1 = C_PURPLE;
//									break;
//								}
//								else if (key3 == 51) {
//									system("cls");
//									color_name1 = "������";
//									color_player1 = C_YELLOW;
//									break;
//								}
//								else if (key3 == 52) {
//									system("cls");
//									color_name1 = "�������";
//									color_player1 = C_BLUE;
//									break;
//								}
//								else if (key3 == 53) {
//									system("cls");
//									color_name1 = "�����";
//									color_player1 = C_WHITE;
//									break;
//								}
//								else if (key3 == 54) {
//									system("cls");
//									color_name1 = "�������";
//									color_player1 = C_GREEN;
//									break;
//								}
//								else if (key3 == 55) {
//									system("cls");
//									color_name1 = "���������";
//									color_player1 = C_Bir;
//									break;
//								}
//								else {
//									system("cls");
//								}
//
//							}
//
//
//						}
//						else if (key2 == 52) {
//
//							system("cls");
//							break;
//						}
//						else {
//							system("cls");
//						}
//
//					}
//				}
//				else if (key == 50) {
//					system("cls");
//					while (true) {
//						cout << "[+] ��������� ������ " << C_Bir << "2\n\n" << C_WHITE;
//						cout << left << setw(16) << "[1] ���" << ": " << C_GRAY << player_name2 << C_WHITE << "\n";
//						cout << left << setw(16) << "[2] ������" << ": " << C_GRAY << figure2 << C_WHITE << "\n";
//						cout << left << setw(16) << "[3] ����" << ": " << color_player2 << color_name2 << C_WHITE << "\n";
//						cout << left << setw(16) << "[4] �����" << "\n\n";
//						cout << "[+] ����: ";
//						key2 = _getch();
//						if (key2 == 49) {
//							system("cls");
//							cout << "������� ���: ";
//							cin >> player_name2;
//							system("cls");
//
//						}
//						else if (key2 == 50) {
//							system("cls");
//							cout << "������� ������: ";
//							cin >> figure2;
//							system("cls");
//
//						}
//						else if (key2 == 51) {
//							system("cls");
//							while (true) {
//								cout << "[+] �������� ����\n\n";
//								cout << "[1] �������\n";
//								cout << "[2] ����������\n";
//								cout << "[3] ������\n";
//								cout << "[4] �������\n";
//								cout << "[5] �����\n";
//								cout << "[6] �������\n";
//								cout << "[7] ���������\n";
//								key3 = _getch();
//								if (key3 == 49) {
//									system("cls");
//									color_name2 = "�������";
//									color_player2 = C_RED;
//									break;
//								}
//								else if (key3 == 50) {
//									system("cls");
//									color_name2 = "����������";
//									color_player2 = C_PURPLE;
//									break;
//								}
//								else if (key3 == 51) {
//									system("cls");
//									color_name2 = "������";
//									color_player2 = C_YELLOW;
//									break;
//								}
//								else if (key3 == 52) {
//									system("cls");
//									color_name2 = "�������";
//									color_player2 = C_BLUE;
//									break;
//								}
//								else if (key3 == 53) {
//									system("cls");
//									color_name2 = "�����";
//									color_player2 = C_WHITE;
//									break;
//								}
//								else if (key3 == 54) {
//									system("cls");
//									color_name2 = "�������";
//									color_player2 = C_GREEN;
//									break;
//								}
//								else if (key3 == 55) {
//									system("cls");
//									color_name2 = "���������";
//									color_player2 = C_Bir;
//									break;
//								}
//								else {
//									system("cls");
//								}
//
//
//							}
//
//
//						}
//						else if (key2 == 52) {
//
//							system("cls");
//							break;
//						}
//						else {
//							system("cls");
//						}
//
//					}
//				}
//				else if (key == 51) {
//					system("cls");
//					break;
//				}
//				else {
//					system("cls");
//				}
//
//
//			}
//		}
//
//		else if (key == 52) {
//			system("cls");
//			break;
//		}
//		system("cls");
//	}
//
//
//	return 0;
//}
