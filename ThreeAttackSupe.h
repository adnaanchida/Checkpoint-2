// Adnaan Chida
// Checkpoint 6


#pragma once

#ifndef THREEATTACKSUPE_H
#define THREEATTACKSUPE_H

#include "TwoAttackSupe.h"

class ThreeAttackSupe : public TwoAttackSupe {
public:
    ThreeAttackSupe(int health, int stamina);
    virtual ~ThreeAttackSupe();
    virtual void GetPunched();
    virtual void GetKicked();
    virtual void GetSuperPowered();
private:
    int stamina;
    
};

#endif