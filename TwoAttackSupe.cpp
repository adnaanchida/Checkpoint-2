#include "TwoAttackSupe.h"
#include <cstdlib>
#include <ctime>

TwoAttackSupe::TwoAttackSupe(int health) {
    this->health = health;
}

TwoAttackSupe::~TwoAttackSupe() {
    // nothing here
}

bool TwoAttackSupe::IsDefeated() {
    if (health <= 0) {
        return true;
    }
    return false;
}

void TwoAttackSupe::GetPunched() {
    health -= 5;
}

void TwoAttackSupe::GetKicked() {
    int damage = rand() % 10 + 1;
    health -= damage;
}

/*
* Muscles Wins: 70.1
Bones Wins:   29.9

To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/