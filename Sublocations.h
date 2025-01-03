#include "Library.h"
#define Dialogues
#include "Game.h"
#include "Inventory.h"
#include "Quests.h"
#include "Items.h"
#define Project_VRPO

extern int heroHealth, heroAttack, heroMana, heroSpeed, heroArmor, getQuest;
extern bool questList[];

using namespace std;

void notlheimTavern() {
    cout << std::endl << "***  ВЫ ПРЕБЫВАЕТЕ В ТАВЕРНУ  ***" << endl;
    cout << std::endl << "В этом месте стоял запах дешевой выпивки и крови. В углу с важным видом играли в карты четверо мужчин. Каждый на вид был лет сорока." << endl;
    cout << "Чуть левее парень, лет двадцати, заигрывал с такой же молодой девушкой. А еще дальше сидели местные стражники, опрокидывая в себя темный эль, " << endl;
    cout << "параллельно разговаривая о выполненной норме патрулирования окрестностей старых дорог. Около стойки стояло человек пять. Все присутствующие были одеты по-разному: " << endl;
    cout << "у одних чистые офицерские мундиры, у других обыкновенное рабочее тряпьё, разной степени загрязненности." << endl;

    system("pause");

    bool tavernBool = true;
    while (tavernBool) {
        int tavern;
 cout << "###  Выберите действия:  ###" << endl;
 cout << "1. Подойти к барной стойке." << endl;
 cout << "2. Подойти к офицерам." << endl;
 cout << "3. Подойти к рабочим." << endl;
 cout << "4. Уйти." << std::endl;
 cin >> tavern;

 switch (tavern) {
 case 1: {
     cout << "Подойдя к барной стойке, я осмотрелся." << endl;
     system("pause");

     bool innkeeperBool = true;
     while (innkeeperBool) {
         int tavernSwitch;
         cout << "###  Выберите действия:  ###" << endl;
         cout << "1. Украсть бутылку спиртного." << endl;
         cout << "2. Затеять драку с рядом стоящим гражданином." << endl;
         cout << "3. Дождаться трактирщика." << endl;
         cout << "4. Уйти." << endl;
         cin >> tavernSwitch;

         switch (tavernSwitch) {   // Innkeeper
         case 1: {
             std::cout << "Облокотившись на стойку, я начал рассматривать." << std::endl;
 system("pause");

 int drinkChoice;
 std::cout << "###  Выберите действие:  ###" << std::endl;
 std::cout << "1. Украсть пинту эля." << std::endl;
 std::cout << "2. Украсть бутылку водки." << std::endl;
 std::cout << "3. Украсть бутылку бренди." << std::endl;
 std::cin >> drinkChoice;

 switch (drinkChoice) {
 case 1:
     cout << "Ловким движением рук я выхватил пинту эля и спрятал за пазухой." << endl;

     AddItem("Пинта эля", 1, pintOfEl);
     cout << "В иневентарь добавлен новый предмет!" << endl;
     cout << "Нажмите 1 для просмотра." << endl;
     cin >> tavernSwitch;
     if (tavernSwitch == 1) {
         OutputInventory();
         system("pause");
     }

     break;
 case 2:
     cout << "Ловким движением рук я выхватил бутылку водки и спрятал за пазухой." << endl;

                        AddItem("Бутылка водки", 1, bottleOfVodka);
                        cout << "В иневентарь добавлен новый предмет!" << endl;
                        cout << "Нажмите 1 для просмотра." << endl;
                        cin >> tavernSwitch;
                        if (tavernSwitch == 1) {
                            OutputInventory();
                            system("pause");
                        }

                        break;
                    case 3:
                        cout << "Ловким движением рук я выхватил бутылку бренди и спрятал за пазухой." << endl;

                        AddItem("Бутылка бренди", 1, bottleOfBrendy);
                        cout << "В иневентарь добавлен новый предмет!" << endl;
                        cout << "Нажмите 1 для просмотра." << endl;
                        cin >> tavernSwitch;
                        if (tavernSwitch == 1) {
                            OutputInventory();
                            system("pause");
                        }

                        break;
                    default:
        cout << "ОШИБКА!!! Вы ввели неверное значение." << endl;
        continue;
    }
    break;
}
case 2: {
    cout << "Подойдя поближе к стоящему у стойки молодому человеку, я сказал:" << endl << endl;;
    cout << "- Парень, мне кажется, ты на меня косо смотришь, у тебя есть ко мне претензии?" << endl;
    system("pause");

    cout << "- Чего?" << endl;
    system("pause");

    cout << "- Того, давай разберемся один на один. Или ты боишься?" << endl;
    system("pause");

    cout << "- Да ты, наверное, охренел. Ты за свои слова сейчас получишь!" << endl;
    system("pause");

    enemy("Рабочий", 15, 3, 0, heroHealth, heroMana, heroAttack, heroArmor, heroSpeed);
    break;
}
case 3: {
    notlheimInnkeeper();
    break;
