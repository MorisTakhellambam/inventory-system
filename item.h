#pragma once                //this particular header file to included only once when included

#include <iostream>
using namespace std;

class Item
{
    protected:
        string name;        //every item has a name
        int size, price;    //every item has size and price
    
    public:
    int getSize(){          //getter function of item size
        return size;
    }
    string getName(){       //getter function of item name
        return name;
    }
};

class Gun : public Item
{
    protected:
        float damage, fireRate;
};

class Ordinance : public Item
{
    protected:
        float throwDistance, damage, range;
};

class Heal : public Item
{
    protected:
        float healHP;
};