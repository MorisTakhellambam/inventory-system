#pragma once
#include "item.h"

class Molly : public Ordinance
{
    public:
    Molly()
    {
        name = "Molly";
        size = 2;
        price = 150;
        throwDistance = 60;
        damage = 30;
        range = 30;
    }
};