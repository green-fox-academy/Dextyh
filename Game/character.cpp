#include "character.h"


void Character::setDie() {

}

void Character::strikeBack(Character hero, Character enemie) {

    if (2 * (rand() % 6 + 1) + enemie._strikePoint > hero._defendPoint) {
        std::cout << std::endl << "Before STRIKE -->  Hero HP: " << hero._hpCurrent << " Enemie HP: " << enemie._hpCurrent << std::endl;
        hero._hpCurrent = hero._hpCurrent - (enemie._strikeValue - hero._defendPoint);

        std::cout << "Enemie STRIKE | Damage: " << enemie._strikeValue - hero._defendPoint << std::endl;
        std::cout << "After STRIKE -->  Hero HP: " << hero._hpCurrent << " Enemie HP: " << enemie._hpCurrent << std::endl;
    } else {
        std::cout << std::endl << "Enemie STRIKE ---> MISS" << std::endl;
    }

}

void Character::strike(Area& area, Character& hero, Character& enemie) {

    if (area.isCaptured(hero._xPos, hero._yPos) && hero._xPos == enemie._xPos && hero._yPos == enemie._yPos && enemie._isAlive == IsAlive::ALIVE) {

        if (2 * (rand() % 6 + 1) + hero._strikePoint > enemie._defendPoint) {
            std::cout << std::endl << "Before STRIKE -->  Hero HP: " << hero._hpCurrent << " Enemie HP: " << enemie._hpCurrent << std::endl;
            enemie._hpCurrent = enemie._hpCurrent - (hero._strikeValue - enemie._defendPoint);
            std::cout << "Hero STRIKE | Damage: " << hero._strikeValue - enemie._defendPoint << std::endl;
            std::cout << "After STRIKE -->  Hero HP: " << hero._hpCurrent << " Enemie HP: " << enemie._hpCurrent << std::endl;
            std::cout << "Enemie DEFENSE POINT: " << enemie._defendPoint << std::endl;

            if (enemie._hpCurrent <= 0) {
                std::cout << "Enemie KILLED" << std::endl << std::endl;
                enemie._isAlive = IsAlive ::DEAD;
            }

        } else {
            std::cout << std::endl << "Hero STRIKE ---> MISS" << std::endl << std::endl;
        }

        if (enemie._isAlive == IsAlive::ALIVE) {
            strikeBack(hero, enemie);
        }

    }
}
