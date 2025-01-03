#include "Library.h"
using namespace std;

void notlheimInnkeeper() {
	setlocale(LC_ALL, "RU");
	cout << endl << "Чего тебе, чужеземец?" << endl;
	cout << endl;

	int notlheimInnkeeperDialogue;

	cout << "###  Выберите вариант ответа:  ###" << endl;
	cout << "1. Расскажи про это место." << endl;
	cout << "2. Почему империя решила оставить вас на произвол судьбы?" << endl;
	cout << "3. Уйти." << endl;
	cin >> notlheimInnkeeperDialogue; cout << endl;
