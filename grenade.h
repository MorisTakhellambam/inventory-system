#pragma once
#include "item.h"

class Grenade : public Ordinance
{
    public:
    Grenade()
    {
        name = "Grenade";
        size = 2;
        price = 200;
        throwDistance = 80;
        damage = 50;
        range = 20;
    }
};