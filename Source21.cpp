//#include <iostream>
//using namespace std;
//
//
//int main() {
//	setlocale(0, "");
//
//	int arr[7] = { 123,23,4,6,86,32,1 };
//	for (int i = 0; i < size(arr); i++) {
//		cout << "[+]������������� | ������ " << i << " : ";
//		cin >> arr[i];
//	}
//	bool check = true;
//	while (check)
//	{
//		cout << endl;
//		system("pause");
//		system("cls");
//
//		//����� ����
//		cout << "[+]��������� �������: " << endl << endl
//			<< "[1]���������� �� �����������" << endl
//			<< "[2]���������� �� ��������" << endl
//			<< "[3]����������� ������" << endl
//			<< "[4]������� ������" << endl
//			<< "[5]��������� ������" << endl
//			<< "[6]�������� ������" << endl << endl
//			<< "[7-8]�����" << endl
//			<< "[9]������ ����� �������� �������" << endl;
//
//
//		int key;
//		int counter1 = 1;
//		int counter2 = 0;
//		int separator;
//		cout << "[+]����: ";
//		cin >> key;
//		switch (key)
//		{
//		case 1:
//			for (int i = 0; i < size(arr) - 1; i++) {
//				for (int j = 0; j < size(arr) - i - 1; j++) {
//					if (arr[j] > arr[j + 1]) {
//						int temp = arr[j + 1];
//						arr[j + 1] = arr[j];
//						arr[j] = temp;
//					}
//				}
//			}
//			for (int i = 0; i < size(arr); i++) {
//				cout << arr[i] << " ";
//			}
//			break;
//		case 2:
//			for (int i = 0; i < size(arr) - 1; i++) {
//				for (int j = 0; j < size(arr) - i - 1; j++) {
//					if (arr[j] < arr[j + 1]) {
//						int temp = arr[j + 1];
//						arr[j + 1] = arr[j];
//						arr[j] = temp;
//					}
//				}
//			}
//			for (int i = 0; i < size(arr); i++) {
//				cout << arr[i] << " ";
//			}
//			break;
//		case 3:
//			for (int i = 0; i < size(arr); i++) {
//				counter1 *= arr[i];
//			}
//			cout << counter1;
//			break;
//		case 4:
//			for (int i = 0; i < size(arr); i++) {
//				counter2 += arr[i];
//			}
//			cout << counter2;
//			break;
//		case 5:
//			cout << "������� ��������: ";
//			cin >> separator;
//			cout << endl;
//			for (int i = 0; i < size(arr); i++) {
//				arr[i] /= separator;
//				cout << arr[i] << " ";
//			}
//
//
//			break;
//		case 6:
//			for (int i = 0; i < size(arr); i++) {
//				arr[i] = 0;
//				cout << arr[i] << " ";
//			}
//			break;
//
//		case 9:
//			system("cls");
//			for (int i = 0; i < size(arr); i++) {
//				cout << "[+]������������� | ������ " << i << " :";
//				cin >> arr[i];
//			}
//
//			break;
//
//		default:
//			check = false;
//			break;
//		}
//	}
//
//
//}
//
