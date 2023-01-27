// Adnaan Chida
// Checkpoint 6

#include "TwoAttackSupe.h"
#include "ThreeAttackSupe.h"


ThreeAttackSupe::ThreeAttackSupe(int health, int stamina) : TwoAttackSupe(health) {
    this->stamina = stamina;
}

ThreeAttackSupe::~ThreeAttackSupe() {
    // nothing here...
}

void ThreeAttackSupe::GetPunched() {
    stamina += 2;
    health -= stamina;
}

void ThreeAttackSupe::GetKicked() {
    stamina += 1;
    health += stamina;
}

void ThreeAttackSupe::GetSuperPowered() {
    stamina = 0;
    health -= 20;
}