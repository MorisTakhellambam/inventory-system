#pragma once
#include "item.h"

class Rifle : public Gun
{
    protected:
        float weight;
    
    public:
    Rifle()
    {
        name = "Rifle";
        size = 16;
        price = 3000;
        damage = 40;
        fireRate = 10;
        weight = 30;
    }
};