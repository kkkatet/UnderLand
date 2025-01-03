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
