#include "Play.h"

#include <iostream>
#include <vector>

using namespace std;

bool Player::check_win() { //функция проверки выигрыша

	if (field[0][0] == 'X' and
		field[0][1] == 'X' and
		field[0][2] == 'X') {
		cout << "Крестик победил!" << endl;
		return true;
	}

	if (field[1][0] == 'X' and
		field[1][1] == 'X' and
		field[1][2] == 'X') {
		cout << "Победил крестик!" << endl;
		return true;
	}

	if (field[2][0] == 'X' and
		field[2][1] == 'X' and
		field[2][2] == 'X') {
		cout << "Победил крестик!" << endl;
		return true;
	}

	if (field[0][0] == 'X' and
		field[1][0] == 'X' and
		field[2][0] == 'X') {
		cout << "Победил крестик!" << endl;
		return true;
	}

	if (field[0][1] == 'X' and
		field[1][1] == 'X' and
		field[2][1] == 'X') {
		cout << "Победил крестик!" << endl;
		return true;
	}

	if (field[0][2] == 'X' and
		field[1][2] == 'X' and
		field[2][2] == 'X') {
		cout << "Победил крестик!" << endl;
		return true;
	}

	if (field[0][0] == 'X' and
		field[1][1] == 'X' and
		field[2][2] == 'X') {
		cout << "Победил крестик!" << endl;
		return true;
	}

	if (field[0][2] == 'X' and
		field[1][1] == 'X' and
		field[2][0] == 'X') {
		cout << "Победил крестик!" << endl;
		return true;
	}

	if (field[0][0] == 'O' and
		field[0][1] == 'O' and
		field[0][2] == 'O') {
		cout << "Победил нолик!" << endl;
		return true;
	}

	if (field[1][0] == 'O' and
		field[1][1] == 'O' and
		field[1][2] == 'O') {
		cout << "Победил нолик!" << endl;
		return true;
	}

	if (field[2][0] == 'O' and
		field[2][1] == 'O' and
		field[2][2] == 'O') {
		cout << "Победил нолик!" << endl;
		return true;
	}

	if (field[0][0] == 'O' and
		field[1][0] == 'O' and
		field[2][0] == 'O') {
		cout << "Победил нолик!" << endl;
		return true;
	}

	if (field[0][1] == 'O' and
		field[1][1] == 'O' and
		field[2][1] == 'O') {
		cout << "Победил нолик!" << endl;
		return true;
	}

	if (field[0][2] == 'O' and
		field[1][2] == 'O' and
		field[2][2] == 'O') {
		cout << "Победил нолик!" << endl;
		return true;
	}

	if (field[0][0] == 'O' and
		field[1][1] == 'O' and
		field[2][2] == 'O') {
		cout << "Победил нолик!" << endl;
		return true;
	}

	if (field[0][2] == 'O' and
		field[1][1] == 'O' and
		field[2][0] == 'O') {
		cout << "Победил нолик!" << endl;
		return true;
	}
	else return false;
}

void Player::field_draw() { //функция отрисовки поля

	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 3; col++)
		{
			cout << field[row][col] << "  ";
		}
		cout << endl;
	}
}

void Player::play() { //функция с логикой игры
	int pos; //позиция, которую вводит игрок (на указанную позицию будет помещён X/O)

	cout << "Начало игры" << endl;
	cout << endl; //отступ
	field_draw(); //отрисовка пустого поля в начале игры
	for (int i = 0; i < 9; i++) {
		if (i % 2 == 0) { //условие для чередования ходов
			while (true) {
				cout << endl; //отступ
				cout << "Ходит крестик: " << endl;
				cout << endl;
				cout << "Напиши номер ячейки (1-9): ";
				cin >> pos;

				if (pos == 1) {
					if (field[0][0] != 'o') { //проверка ячеек (свободна/не свободна)
						cout << "Ячейка занята!" << endl;
						continue;
					}
					else {
						field[0][0] = 'X'; //если ячейка свободна, то присваеваем ей X и отрисовываем изменённое поле
						cout << endl; //отступ
						field_draw();
					}
				}
				if (pos == 2) {
					if (field[0][1] != 'o') {
						cout << "Ячейка занята!" << endl;
						continue;
					}
					else {
						field[0][1] = 'X';
						cout << endl; //отступ
						field_draw();
					}
				}
				if (pos == 3) {
					if (field[0][2] != 'o') {
						cout << "Ячейка занята!" << endl;
						continue;
					}
					else {
						field[0][2] = 'X';
						cout << endl; //отступ
						field_draw();
					}
				}
				if (pos == 4) {
					if (field[1][0] != 'o') {
						cout << "Ячейка занята!" << endl;
						continue;
					}
					else {
						field[1][0] = 'X';
						cout << endl; //отступ
						field_draw();
					}
				}
				if (pos == 5) {
					if (field[1][1] != 'o') {
						cout << "Ячейка занята!" << endl;
						continue;
					}
					else {
						field[1][1] = 'X';
						cout << endl; //отступ
						field_draw();
					}
				}
				if (pos == 6) {
					if (field[1][2] != 'o') {
						cout << "Ячейка занята!" << endl;
						continue;
					}
					else {
						field[1][2] = 'X';
						cout << endl; //отступ
						field_draw();
					}
				}
				if (pos == 7) {
					if (field[2][0] != 'o') {
						cout << "Ячейка занята!" << endl;
						continue;
					}
					else {
						field[2][0] = 'X';
						cout << endl; //отступ
						field_draw();
					}
				}
				if (pos == 8) {
					if (field[2][1] != 'o') {
						cout << "Ячейка занята!" << endl;
						continue;
					}
					else {
						field[2][1] = 'X';
						cout << endl; //отступ
						field_draw();
					}
				}
				if (pos == 9) {
					if (field[2][2] != 'o') {
						cout << "Ячейка занята!" << endl;
						continue;
					}
					else {
						field[2][2] = 'X';
						cout << endl; //отступ
						field_draw();
					}
				}
				break;
			}
		}
		else
		{
			while (true) {
				cout << endl; //отступ
				cout << "Ходит нолик: " << endl;
				cout << endl;
				cout << "Напиши номер ячейки (1-9): ";
				cin >> pos;

				if (pos == 1) {
					if (field[0][0] != 'o') { //проверка ячеек (свободна/не свободна)
						cout << "Ячейка занята!" << endl;
						continue;
					}
					else {
						field[0][0] = 'O'; //если ячейка свободна, то присваеваем ей O и отрисовываем изменённое поле
						cout << endl; //отступ
						field_draw();
					}
				}
				if (pos == 2) {
					if (field[0][1] != 'o') {
						cout << "Ячейка занята!" << endl;
						continue;
					}
					else {
						field[0][1] = 'O';
						cout << endl; //отступ
						field_draw();
					}
				}
				if (pos == 3) {
					if (field[0][2] != 'o') {
						cout << "Ячейка занята!" << endl;
						continue;
					}
					else {
						field[0][2] = 'O';
						cout << endl; //отступ
						field_draw();
					}
				}
				if (pos == 4) {
					if (field[1][0] != 'o') {
						cout << "Ячейка занята!" << endl;
						continue;
					}
					else {
						field[1][0] = 'O';
						cout << endl; //отступ
						field_draw();
					}
				}
				if (pos == 5) {
					if (field[1][1] != 'o') {
						cout << "Ячейка занята!" << endl;
						continue;
					}
					else {
						field[1][1] = 'O';
						cout << endl; //отступ
						field_draw();
					}
				}
				if (pos == 6) {
					if (field[1][2] != 'o') {
						cout << "Ячейка занята!" << endl;
						continue;
					}
					else {
						field[1][2] = 'O';
						cout << endl; //отступ
						field_draw();
					}
				}
				if (pos == 7) {
					if (field[2][0] != 'o') {
						cout << "Ячейка занята!" << endl;
						continue;
					}
					else {
						field[2][0] = 'O';
						cout << endl; //отступ
						field_draw();
					}
				}
				if (pos == 8) {
					if (field[2][1] != 'o') {
						cout << "Ячейка занята!" << endl;
						continue;
					}
					else {
						field[2][1] = 'O';
						cout << endl; //отступ
						field_draw();
					}
				}
				if (pos == 9) {
					if (field[2][2] != 'o') {
						cout << "Ячейка занята!" << endl;
						continue;
					}
					else {
						field[2][2] = 'O';
						cout << endl; //отступ
						field_draw();
					}
				}
				break;
			}
		}
		if (check_win()) break; //проверяем расположение знаков, в случае выигрыша цикл останавливается
		if (i >= 8) { //проверка ничьи
			if (check_win() == false) {
				cout << endl; //отступ
				cout << "Ничья" << endl;
				break;
			}
		}
		else continue;
	}
}