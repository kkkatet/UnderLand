#pragma once

#include <iostream>

extern int heroHealth, heroAttack, heroMana, heroSpeed, heroArmor, getQuest;

using namespace std;

void healingPotion() {
	setlocale(LC_ALL, "RU");
	cout << "Вы использовали Зелье Здоровья!" << endl;
	cout << "Здоровье: + 10" << endl;

	heroHealth += 10;

	if (heroHealth > 20) {
		heroHealth = 20;
	}

	cout << "Текущее состояние здоровья: " << heroHealth << endl;

	system("pause");
} 

void bottleOfVodka() {
	setlocale(LC_ALL, "RU");
	cout << endl << "Вы использовали Бутылку Водки!" << endl;
	cout << "Здоровье: + 6" << endl;

	heroHealth += 6;

	cout << "Текущее состояние здоровья: " << heroHealth << endl;

	system("pause");
}

void bottleOfBrendy() {
	setlocale(LC_ALL, "RU");
	cout << endl << "Вы использовали Бутылку Бренди!" << endl;
	cout << "Здоровье: + 7" << endl;

	heroHealth += 7;

	cout << "Текущее состояние здоровья: " << heroHealth << endl;

	system("pause");
}

void pintOfEl() {
	setlocale(LC_ALL, "RU");
	cout << endl << "Вы использовали Пинту Эля!" << endl;
	cout << "Здоровье: + 3" << endl;

	heroHealth += 3;

	cout << "Текущее состояние здоровья: " << heroHealth << endl;

	system("pause");
}

void keroseneLamp() {
	setlocale(LC_ALL, "RU");
	cout << endl << "Источает свет." << endl;

	system("pause");
}

void boxOfMatches() {
	setlocale(LC_ALL, "RU");
	cout << endl << "Необходимы для поджигания лампы." << endl;

	system("pause");
}

void toolSet() {
	cout << endl << "Вы использовали Набор инстументов!" << endl;
	cout << "Броня: + 2" << endl;

	heroArmor += 2;

	cout << "Текущее состояние брони: " << heroArmor << endl;

	system("pause");
}