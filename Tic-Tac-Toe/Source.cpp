#include <iostream>
#include <vector>
#include <Windows.h>

#include "Play.h" //���������� header �� ����� ���������

using namespace std;

int main() {
	setlocale(LC_ALL, "rus"); //���������� ������� ���� � �������
	SetConsoleTitle(L"�������� - ������"); //�������� ����

	int menu;

	Player obj;

	cout << "����� ���������� � ����!" << endl;
	cout << endl;
	cout << " ����� ����� ���������? " << endl;
	cout << "------------------------------------------" << endl;
	cout << "| 1) � ������� \t\t\t\t |" << endl;
	cout << "| 2) � \"�����������\" (Coming soon...)\t |" << endl;
	cout << "------------------------------------------" << endl;
	cout << endl;
	cout << "> ";
	cin >> menu;
	cout << endl;

	if (menu == 1) obj.play();
	else if (menu == 2) /*comp.play(comp.field); */ cout << "� ��������..." << endl;
	else cout << "������� ����� �� ����!" << endl;

	system("pause"); //�����, ��� ���� ����� exe ���� ������� �� ���������� ���
}

/*

���� ������� :

	1) ��������� ������
	2) ������� ��������� ����
	3) ������� � ������� ����
	4) ������� �������� ��������

��� ����:

	1) ���� �������
	2) ��������� ���������� ����
	3) ����� ��������� �� �����

*/