#pragma once

#include <iostream>

extern int heroHealth, heroAttack, heroMana, heroSpeed, heroArmor, getQuest;

using namespace std;

void healingPotion() {
	setlocale(LC_ALL, "RU");
	cout << "�� ������������ ����� ��������!" << endl;
	cout << "��������: + 10" << endl;

	heroHealth += 10;

	if (heroHealth > 20) {
		heroHealth = 20;
	}

	cout << "������� ��������� ��������: " << heroHealth << endl;

	system("pause");
} 

void bottleOfVodka() {
	setlocale(LC_ALL, "RU");
	cout << endl << "�� ������������ ������� �����!" << endl;
	cout << "��������: + 6" << endl;

	heroHealth += 6;

	cout << "������� ��������� ��������: " << heroHealth << endl;

	system("pause");
}

void bottleOfBrendy() {
	setlocale(LC_ALL, "RU");
	cout << endl << "�� ������������ ������� ������!" << endl;
	cout << "��������: + 7" << endl;

	heroHealth += 7;

	cout << "������� ��������� ��������: " << heroHealth << endl;

	system("pause");
}

void pintOfEl() {
	setlocale(LC_ALL, "RU");
	cout << endl << "�� ������������ ����� ���!" << endl;
	cout << "��������: + 3" << endl;

	heroHealth += 3;

	cout << "������� ��������� ��������: " << heroHealth << endl;

	system("pause");
}

void keroseneLamp() {
	setlocale(LC_ALL, "RU");
	cout << endl << "�������� ����." << endl;

	system("pause");
}

void boxOfMatches() {
	setlocale(LC_ALL, "RU");
	cout << endl << "���������� ��� ���������� �����." << endl;

	system("pause");
}

void toolSet() {
	cout << endl << "�� ������������ ����� �����������!" << endl;
	cout << "�����: + 2" << endl;

	heroArmor += 2;

	cout << "������� ��������� �����: " << heroArmor << endl;

	system("pause");
}