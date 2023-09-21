#pragma once
#include "item.h"

class Pistol : public Gun
{
    protected:
        float weight;
    
    public:
    Pistol()
    {
        name = "Pistol";
        size = 4;
        price = 500;
        damage = 10;
        fireRate = 1;
        weight = 10;
    }
};