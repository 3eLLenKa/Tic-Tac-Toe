#include "Play.h"

#include <iostream>
#include <vector>

using namespace std;

bool Player::check_win() { //������� �������� ��������

	if (field[0][0] == 'X' and
		field[0][1] == 'X' and
		field[0][2] == 'X') {
		cout << "������� �������!" << endl;
		return true;
	}

	if (field[1][0] == 'X' and
		field[1][1] == 'X' and
		field[1][2] == 'X') {
		cout << "������� �������!" << endl;
		return true;
	}

	if (field[2][0] == 'X' and
		field[2][1] == 'X' and
		field[2][2] == 'X') {
		cout << "������� �������!" << endl;
		return true;
	}

	if (field[0][0] == 'X' and
		field[1][0] == 'X' and
		field[2][0] == 'X') {
		cout << "������� �������!" << endl;
		return true;
	}

	if (field[0][1] == 'X' and
		field[1][1] == 'X' and
		field[2][1] == 'X') {
		cout << "������� �������!" << endl;
		return true;
	}

	if (field[0][2] == 'X' and
		field[1][2] == 'X' and
		field[2][2] == 'X') {
		cout << "������� �������!" << endl;
		return true;
	}

	if (field[0][0] == 'X' and
		field[1][1] == 'X' and
		field[2][2] == 'X') {
		cout << "������� �������!" << endl;
		return true;
	}

	if (field[0][2] == 'X' and
		field[1][1] == 'X' and
		field[2][0] == 'X') {
		cout << "������� �������!" << endl;
		return true;
	}

	if (field[0][0] == 'O' and
		field[0][1] == 'O' and
		field[0][2] == 'O') {
		cout << "������� �����!" << endl;
		return true;
	}

	if (field[1][0] == 'O' and
		field[1][1] == 'O' and
		field[1][2] == 'O') {
		cout << "������� �����!" << endl;
		return true;
	}

	if (field[2][0] == 'O' and
		field[2][1] == 'O' and
		field[2][2] == 'O') {
		cout << "������� �����!" << endl;
		return true;
	}

	if (field[0][0] == 'O' and
		field[1][0] == 'O' and
		field[2][0] == 'O') {
		cout << "������� �����!" << endl;
		return true;
	}

	if (field[0][1] == 'O' and
		field[1][1] == 'O' and
		field[2][1] == 'O') {
		cout << "������� �����!" << endl;
		return true;
	}

	if (field[0][2] == 'O' and
		field[1][2] == 'O' and
		field[2][2] == 'O') {
		cout << "������� �����!" << endl;
		return true;
	}

	if (field[0][0] == 'O' and
		field[1][1] == 'O' and
		field[2][2] == 'O') {
		cout << "������� �����!" << endl;
		return true;
	}

	if (field[0][2] == 'O' and
		field[1][1] == 'O' and
		field[2][0] == 'O') {
		cout << "������� �����!" << endl;
		return true;
	}
	else return false;
}

void Player::field_draw() { //������� ��������� ����

	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 3; col++)
		{
			cout << field[row][col] << "  ";
		}
		cout << endl;
	}
}

void Player::play() { //������� � ������� ����
	int pos; //�������, ������� ������ ����� (�� ��������� ������� ����� ������� X/O)

	cout << "������ ����" << endl;
	cout << endl; //������
	field_draw(); //��������� ������� ���� � ������ ����
	for (int i = 0; i < 9; i++) {
		if (i % 2 == 0) { //������� ��� ����������� �����
			while (true) {
				cout << endl; //������
				cout << "����� �������: " << endl;
				cout << endl;
				cout << "������ ����� ������ (1-9): ";
				cin >> pos;

				if (pos == 1) {
					if (field[0][0] != 'o') { //�������� ����� (��������/�� ��������)
						cout << "������ ������!" << endl;
						continue;
					}
					else {
						field[0][0] = 'X'; //���� ������ ��������, �� ����������� �� X � ������������ ��������� ����
						cout << endl; //������
						field_draw();
					}
				}
				if (pos == 2) {
					if (field[0][1] != 'o') {
						cout << "������ ������!" << endl;
						continue;
					}
					else {
						field[0][1] = 'X';
						cout << endl; //������
						field_draw();
					}
				}
				if (pos == 3) {
					if (field[0][2] != 'o') {
						cout << "������ ������!" << endl;
						continue;
					}
					else {
						field[0][2] = 'X';
						cout << endl; //������
						field_draw();
					}
				}
				if (pos == 4) {
					if (field[1][0] != 'o') {
						cout << "������ ������!" << endl;
						continue;
					}
					else {
						field[1][0] = 'X';
						cout << endl; //������
						field_draw();
					}
				}
				if (pos == 5) {
					if (field[1][1] != 'o') {
						cout << "������ ������!" << endl;
						continue;
					}
					else {
						field[1][1] = 'X';
						cout << endl; //������
						field_draw();
					}
				}
				if (pos == 6) {
					if (field[1][2] != 'o') {
						cout << "������ ������!" << endl;
						continue;
					}
					else {
						field[1][2] = 'X';
						cout << endl; //������
						field_draw();
					}
				}
				if (pos == 7) {
					if (field[2][0] != 'o') {
						cout << "������ ������!" << endl;
						continue;
					}
					else {
						field[2][0] = 'X';
						cout << endl; //������
						field_draw();
					}
				}
				if (pos == 8) {
					if (field[2][1] != 'o') {
						cout << "������ ������!" << endl;
						continue;
					}
					else {
						field[2][1] = 'X';
						cout << endl; //������
						field_draw();
					}
				}
				if (pos == 9) {
					if (field[2][2] != 'o') {
						cout << "������ ������!" << endl;
						continue;
					}
					else {
						field[2][2] = 'X';
						cout << endl; //������
						field_draw();
					}
				}
				break;
			}
		}
		else
		{
			while (true) {
				cout << endl; //������
				cout << "����� �����: " << endl;
				cout << endl;
				cout << "������ ����� ������ (1-9): ";
				cin >> pos;

				if (pos == 1) {
					if (field[0][0] != 'o') { //�������� ����� (��������/�� ��������)
						cout << "������ ������!" << endl;
						continue;
					}
					else {
						field[0][0] = 'O'; //���� ������ ��������, �� ����������� �� O � ������������ ��������� ����
						cout << endl; //������
						field_draw();
					}
				}
				if (pos == 2) {
					if (field[0][1] != 'o') {
						cout << "������ ������!" << endl;
						continue;
					}
					else {
						field[0][1] = 'O';
						cout << endl; //������
						field_draw();
					}
				}
				if (pos == 3) {
					if (field[0][2] != 'o') {
						cout << "������ ������!" << endl;
						continue;
					}
					else {
						field[0][2] = 'O';
						cout << endl; //������
						field_draw();
					}
				}
				if (pos == 4) {
					if (field[1][0] != 'o') {
						cout << "������ ������!" << endl;
						continue;
					}
					else {
						field[1][0] = 'O';
						cout << endl; //������
						field_draw();
					}
				}
				if (pos == 5) {
					if (field[1][1] != 'o') {
						cout << "������ ������!" << endl;
						continue;
					}
					else {
						field[1][1] = 'O';
						cout << endl; //������
						field_draw();
					}
				}
				if (pos == 6) {
					if (field[1][2] != 'o') {
						cout << "������ ������!" << endl;
						continue;
					}
					else {
						field[1][2] = 'O';
						cout << endl; //������
						field_draw();
					}
				}
				if (pos == 7) {
					if (field[2][0] != 'o') {
						cout << "������ ������!" << endl;
						continue;
					}
					else {
						field[2][0] = 'O';
						cout << endl; //������
						field_draw();
					}
				}
				if (pos == 8) {
					if (field[2][1] != 'o') {
						cout << "������ ������!" << endl;
						continue;
					}
					else {
						field[2][1] = 'O';
						cout << endl; //������
						field_draw();
					}
				}
				if (pos == 9) {
					if (field[2][2] != 'o') {
						cout << "������ ������!" << endl;
						continue;
					}
					else {
						field[2][2] = 'O';
						cout << endl; //������
						field_draw();
					}
				}
				break;
			}
		}
		if (check_win()) break; //��������� ������������ ������, � ������ �������� ���� ���������������
		if (i >= 8) { //�������� �����
			if (check_win() == false) {
				cout << endl; //������
				cout << "�����" << endl;
				break;
			}
		}
		else continue;
	}
}