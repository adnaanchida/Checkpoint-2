// Adnaan Chida

#pragma once

#ifndef TWOATTACKSUPE_H
#define TWOATTACKSUPE_H

#include "TwoAttackSupe.h"

#include <iostream>
using namespace std;

class TwoAttackSupe {
public:
    int health;
    TwoAttackSupe(int health);
    virtual ~TwoAttackSupe();
    bool IsDefeated();
    virtual void GetPunched();
    virtual void GetKicked();
   
    
};

#endif

/*
* Muscles Wins: 70.1
Bones Wins:   29.9

*/