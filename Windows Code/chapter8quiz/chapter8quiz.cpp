#include <iostream>
#include <string>

enum class MonsterType {
    ogre,
    dragon,
    orc,
    giant_spider,
    slime,
};

struct Monster {
    MonsterType type{};
    std::string name{};
    int health{};

};

std::string getMonsterTypeString(MonsterType type) {
    switch (type)
    {
    case MonsterType::ogre: return "Ogre" ; break;
    case MonsterType::dragon: return "Dragon" ; break;
    case MonsterType::orc: return "Orc" ; break;
    case MonsterType::giant_spider: return "Giant Spider" ; break;
    case MonsterType::slime: return "Slime" ; break;
    default: return "Unknown";
    }
}

void printMonster(Monster monster) {
    std::cout << "This " << getMonsterTypeString(monster.type) << " is named " << monster.name << " and has " << monster.health << " health.\n";
}

int main()
{
    Monster torg{ MonsterType::ogre, "Torg", 145 };
    Monster blurp{ MonsterType::slime, "Blurp", 23 };
    printMonster(torg);
    printMonster(blurp);

    return 0;
}