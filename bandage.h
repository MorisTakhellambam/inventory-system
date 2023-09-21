#pragma once
#include "item.h"

class Bandage : public Heal
{
    public:
    Bandage()
    {
        name = "Bandage";
        size = 1;
        price = 100;
        healHP = 20;
    }
};
