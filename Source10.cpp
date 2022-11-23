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
//	cout << "[+] Программа - Геометрические фигуры\n\n"
//		<< "[1] Линия\n"
//		<< "[2] Квадрат\n"
//		<< "[3] Прямоугольник\n"
//		<< "[4] Треугольник\n"
//		<< "[5] Решетка\n"
//		<< "[6] Крестик\n"
//		<< "[7] Плюс\n"
//		<< "[8] Ромб\n\n"
//		<< "[+] Выберите фигуру: ";
//	cin >> a;
//	system("cls");
//	switch (a) {
//	case 1:
//		int linetype;
//
//		cout << "[+] Фигура: Линия\n\n"
//			<< "[1] Горизонтальная\n"
//			<< "[2] Вертикальная\n\n";
//		cout << "Выберите тип: ";
//		cin >> linetype;
//
//		switch (linetype)
//		{
//		case 1:
//
//			cout << "Длина линии: ";
//			cin >> size;
//			cout << "Текстура линии: ";
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
//			cout << "Длина линии: ";
//			cin >> size;
//			cout << "\nТекстура линии: ";
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
//		cout << "[+] Фигура: Квадрат\n\n"
//			<< "[1] Заполненный\n"
//			<< "[2] Пустой\n\n";
//		cout << "Выберите тип: ";
//		cin >> inside;
//		switch (inside) {
//		case 1:
//
//			cout << "Размер: ";
//			cin >> size;
//			cout << "Текстура: ";
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
//			cout << "Размер: ";
//			cin >> suze;
//			int size = suze - 1;
//			cout << "Текстура: ";
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
//		cout << "[+] Фигура: Прямоугольник\n\n"
//			<< "[1] Заполненный\n"
//			<< "[2] Пустой\n\n"
//			<< "Выберите тип: ";
//		cin >> insude;
//		switch (insude) {
//		case 1:
//			cout << "\n[+] Ширина: ";
//			cin >> width;
//			cout << "[+] Высота: ";
//			cin >> height;
//			cout << "[+] Текстура: ";
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
//				cout << "Вы ввели одинаковые значения для ширины и высоты, это квадрат!";
//			}
//			cout << endl;
//			break;
//		case 2:
//			int wudth;
//			int heught;
//			cout << "\n[+] Ширина: ";
//			cin >> wudth;
//			int width = wudth - 1;
//			cout << "[+] Высота: ";
//			cin >> heught;
//			int height = heught - 1;
//			cout << "[+] Текстура: ";
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
//		cout << "[+] Фигура: Треугольник\n\n";
//		cout << "Высота: ";
//		cin >> size;
//		cout << "Текстура: ";
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
//		cout << "[+] Фигура: Решетка\n\n";
//		cout << "Размер: ";
//		cin >> size;
//		cout << "Текстура: ";
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
//		cout << "[+] Фигура: Крестик\n\n";
//		cout << "Размер: ";
//		cin >> size;
//		cout << "Текстура: ";
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
//		cout << "[+] Фигура: Плюс\n\n";
//		cout << "Размер: ";
//		cin >> size;
//		cout << "Текстура: ";
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
//		cout << "[+] Фигура: Ромб\n\n";
//		cout << "Размер: ";
//		cin >> size;
//		cout << "Текстура: ";
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
//		cout << "Вы вышли из программы!";
//		exit;
//	}
//	return 0;
//}