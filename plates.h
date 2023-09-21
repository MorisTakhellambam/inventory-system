#pragma once
#include "item.h"

class Plates : public Heal
{
    public:
    Plates()
    {
        name = "Plates";
        size = 1;
        price = 100;
        healHP = 40;
    }
};