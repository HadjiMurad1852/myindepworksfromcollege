//#include <iostream>
//using namespace std;
//
//
//int main() {
//	setlocale(0, "");
//
//	int a;
//	int size;
//	int suze;
//	char texture;
//
//	cout << "[+] ��������� - �������������� ������\n\n"
//		<< "[1] �����\n"
//		<< "[2] �������\n"
//		<< "[3] �������������\n"
//		<< "[4] �����������\n"
//		<< "[5] �������\n"
//		<< "[6] �������\n"
//		<< "[7] ����\n"
//		<< "[8] ����\n\n"
//		<< "[+] �������� ������: ";
//	cin >> a;
//	system("cls");
//	switch (a) {
//	case 1:
//		int linetype;
//
//		cout << "[+] ������: �����\n\n"
//			<< "[1] ��������������\n"
//			<< "[2] ������������\n\n";
//		cout << "�������� ���: ";
//		cin >> linetype;
//
//		switch (linetype)
//		{
//		case 1:
//
//			cout << "����� �����: ";
//			cin >> size;
//			cout << "�������� �����: ";
//			cin >> texture;
//
//			for (int i = 0; i < size; i++)
//			{
//				cout << texture;
//			}
//			break;
//
//		case 2:
//
//			cout << "����� �����: ";
//			cin >> size;
//			cout << "\n�������� �����: ";
//			cin >> texture;
//			for (int i = 0; i < size; i++)
//			{
//				cout << texture << "\n";
//			}
//			break;
//		}
//		break;
//
//
//	case 2:
//		int inside;
//
//		cout << "[+] ������: �������\n\n"
//			<< "[1] �����������\n"
//			<< "[2] ������\n\n";
//		cout << "�������� ���: ";
//		cin >> inside;
//		switch (inside) {
//		case 1:
//
//			cout << "������: ";
//			cin >> size;
//			cout << "��������: ";
//			cin >> texture;
//			system("cls");
//			for (int a = 0; a < size; a++) {
//				for (int i = 0; i < size; i++)
//				{
//					cout << texture << " ";
//
//				}
//				cout << endl;
//
//			}
//			break;
//
//
//			break;
//		case 2:
//			cout << "������: ";
//			cin >> suze;
//			int size = suze - 1;
//			cout << "��������: ";
//			cin >> texture;
//			system("cls");
//			for (int a = 0; a <= size; a++) {
//				for (int i = 0; i <= size; i++)
//				{
//					if (a == 0 || i == 0) {
//						cout << texture << " ";
//					}
//					else if (a == size || i == 0) {
//						cout << texture << " ";
//					}
//					else if (a == size || i == size) {
//						cout << texture << " ";
//					}
//					else if (a == 0 || i == size) {
//						cout << texture << " ";
//					}
//					else {
//						cout << "  ";
//					}
//
//				}
//				cout << endl;
//
//			}
//			break;
//		}
//		break;
//	case 3:
//		int insude;
//		int height;
//		int width;
//		cout << "[+] ������: �������������\n\n"
//			<< "[1] �����������\n"
//			<< "[2] ������\n\n"
//			<< "�������� ���: ";
//		cin >> insude;
//		switch (insude) {
//		case 1:
//			cout << "\n[+] ������: ";
//			cin >> width;
//			cout << "[+] ������: ";
//			cin >> height;
//			cout << "[+] ��������: ";
//			cin >> texture;
//			if (width != height) {
//				for (int i = 0; i < height; i++) {
//					for (int a = 0; a < width; a++) {
//						cout << texture << " ";
//					}
//					cout << endl;
//				}
//			}
//			else {
//				cout << "�� ����� ���������� �������� ��� ������ � ������, ��� �������!";
//			}
//			cout << endl;
//			break;
//		case 2:
//			int wudth;
//			int heught;
//			cout << "\n[+] ������: ";
//			cin >> wudth;
//			int width = wudth - 1;
//			cout << "[+] ������: ";
//			cin >> heught;
//			int height = heught - 1;
//			cout << "[+] ��������: ";
//			cin >> texture;
//			if (width != height) {
//				for (int i = 0; i <= height; i++) {
//					for (int a = 0; a <= width; a++) {
//						if (a == 0 || i == 0) {
//							cout << texture << " ";
//						}
//						else if (a == width || i == 0) {
//							cout << texture << " ";
//						}
//						else if (a == width || i == height) {
//							cout << texture << " ";
//						}
//						else if (a == 0 || i == height) {
//							cout << texture << " ";
//						}
//						else {
//							cout << "  ";
//						}
//
//					}
//					cout << endl;
//				}
//
//
//			}
//			break;
//		}
//		break;
//	case 4:
//		cout << "[+] ������: �����������\n\n";
//		cout << "������: ";
//		cin >> size;
//		cout << "��������: ";
//		cin >> texture;
//		system("cls");
//		for (int a = 1; a <= size; a++) {
//			for (int i = 1; i <= size * 2 - 1; i++) {
//				if ((i == size - a + 1) || (i == (size * 2 - 1) - size + a) || a == size) {
//					cout << texture;
//				}
//				else {
//					cout << " ";
//				}
//			}
//			cout << endl;
//		}
//		cout << endl;
//		break;
//	case 5:
//		cout << "[+] ������: �������\n\n";
//		cout << "������: ";
//		cin >> size;
//		cout << "��������: ";
//		cin >> texture;
//		system("cls");
//		for (int a = 0; a < size; a++) {
//			for (int i = 0; i < size; i++) {
//				if (a % 2 != 0 || i % 2 != 0) {
//					cout << texture << " ";
//				}
//				else {
//					cout << ". ";
//				}
//			}
//			cout << endl;
//		}
//		break;
//	case 6:
//		cout << "[+] ������: �������\n\n";
//		cout << "������: ";
//		cin >> size;
//		cout << "��������: ";
//		cin >> texture;
//		system("cls");
//		for (int a = 1; a <= size; a++) {
//			for (int i = 1; i <= size; i++) {
//				if ((a == i) || (i == size - a + 1)) {
//					cout << texture;
//				}
//				else {
//					cout << " ";
//				}
//			}
//			cout << endl;
//		}
//		cout << endl;
//		break;
//	case 7:
//		cout << "[+] ������: ����\n\n";
//		cout << "������: ";
//		cin >> size;
//		cout << "��������: ";
//		cin >> texture;
//		system("cls");
//		for (int a = 0; a < size; a++) {
//			for (int i = 0; i < size; i++) {
//				if (a == size / 2 || i == size / 2) {
//					cout << texture << " ";
//				}
//				else {
//					cout << ". ";
//				}
//			}
//			cout << endl;
//		}
//		break;
//	case 8:
//		cout << "[+] ������: ����\n\n";
//		cout << "������: ";
//		cin >> size;
//		cout << "��������: ";
//		cin >> texture;
//		system("cls");
//		if (size % 2 != 0) {
//			for (int a = 0; a < size; a++) {
//				for (int i = 0; i < size; i++) {
//
//					if (i == size / 2 + a || i == size / 2 - a || i == a - size / 2 || i == size + size / 2 - a - 1)
//						cout << texture << " ";
//					else
//						cout << ". ";
//
//				}
//				cout << endl;
//			}
//		}
//		else {
//			for (int a = 1; a <= size; a++) {
//				for (int i = 1; i <= size; i++) {
//
//					if ((i == size / 2 - a + 1 || i == size / 2 + a - 1) && a <= size / 2) {
//						cout << texture << " ";
//					}
//					else if ((i == a - size / 2 || i == size + size / 2 - a) && a > size / 2) {
//						cout << texture << " ";
//					}
//					else {
//						cout << ". ";
//					}
//				}
//				cout << endl;
//			}
//		}
//		cout << endl;
//		break;
//	default:
//		cout << "�� ����� �� ���������!";
//		exit;
//	}
//	return 0;
//}