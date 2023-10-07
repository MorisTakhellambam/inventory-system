#pragma once
#include "allitems.h"

#include <iostream>
using namespace std;

class Inventory
{
    int size;               //maintaining size of the inventory so that it has limit on the no. of items that can be carried

    Bandage band1;       //instanciating items
    Grenade gred1;
    Molly moll1;
    Pistol pist1;
    Plates plat1;
    Rifle rifl1;

    int bandCount = 0;      //initialising a variable that keep count of each item as 0
    int gredCount = 0;
    int mollCount = 0;  
    int pistCount = 0;
    int platCount = 0;
    int rifCount = 0;

    public:
    
    void addItem(){
        int choice;

        cout << "Choose the item to be added: " << endl
            << "\t1.Rifle\n\t2.Pistol\n\t3.Grenade\n\t4.Molly\n\t5.Bandage\n\t6.Plates" << endl;
        cin >> choice;

        switch (choice)
        {
            case 1:{
                rifCount += 1;

                if(rifCount*rifl1.getSize() + pistCount*pist1.getSize() + gredCount*gred1.getSize() + mollCount*moll1.getSize() + bandCount*band1.getSize() + platCount*plat1.getSize() > size) {
                    cout << "Inventory is full.\n";         //returns full if the current size of the items times the quantity is more than the size of the inventory
                    rifCount -= 1;
                    break;
                }
                else break;  
            }
            case 2:{
                pistCount += 1;
                
                if(rifCount*rifl1.getSize() + pistCount*pist1.getSize() + gredCount*gred1.getSize() + mollCount*moll1.getSize() + bandCount*band1.getSize() + platCount*plat1.getSize() > size) {
                    cout << "Inventory is full.\n";
                    pistCount -= 1;
                    break;
                }
                else break;
            }
            case 3:{
                gredCount += 1;
                
                if(rifCount*rifl1.getSize() + pistCount*pist1.getSize() + gredCount*gred1.getSize() + mollCount*moll1.getSize() + bandCount*band1.getSize() + platCount*plat1.getSize() > size) {
                    cout << "Inventory is full.\n";
                    gredCount -= 1;
                    break;
                }
                else break;
            }
            case 4:{
                mollCount += 1;
                
                if(rifCount*rifl1.getSize() + pistCount*pist1.getSize() + gredCount*gred1.getSize() + mollCount*moll1.getSize() + bandCount*band1.getSize() + platCount*plat1.getSize() > size) {
                    cout << "Inventory is full.\n";
                    mollCount -= 1;
                    break;
                }
                else break;
            }
            case 5:{
                bandCount += 1;
                
                if(rifCount*rifl1.getSize() + pistCount*pist1.getSize() + gredCount*gred1.getSize() + mollCount*moll1.getSize() + bandCount*band1.getSize() + platCount*plat1.getSize() > size) {
                    cout << "Inventory is full.\n";
                    bandCount -= 1;
                    break;
                }
                else break;
            }
            case 6:{
                platCount += 1;
                
                if(rifCount*rifl1.getSize() + pistCount*pist1.getSize() + gredCount*gred1.getSize() + mollCount*moll1.getSize() + bandCount*band1.getSize() + platCount*plat1.getSize() > size) {
                    cout << "Inventory is full.\n";
                    platCount -= 1;
                    break;
                }
                else break;
            }

            default:    cout << "Invalid entry!";
                break;
        }
    }

    void deleteItems(){
        int choice;
        cout << "What would you like to remove: " << endl
            << "\t1.Rifle\n\t2.Pistol\n\t3.Grenade\n\t4.Molly\n\t5.Bandage\n\t6.Plates" << endl;
        cin >> choice;                                  //read the item no. to be deleted to choice

        switch (choice)
        {
            case 1: {
                if(rifCount == 0)
                            cout << "There is no rifle left.\n";        //says invalid if the quantity is already zero
                else rifCount -= 1;                                     //reduce the quantity by one
                
                break;
            }
            
            case 2: {
                if(pistCount == 0)
                            cout << "There is no pistol left.\n";
                else pistCount -= 1;
                
                break;
            }

            case 3: {
                if(gredCount == 0)
                            cout << "There is no grenade left.\n";
                else gredCount -= 1;
                
                break;
            }

            case 4: {
                if(mollCount == 0)
                            cout << "There is no molly left.\n";
                else mollCount -= 1;
                
                break;
            }

            case 5: {
                if(bandCount == 0)
                            cout << "There is no bandage left.\n";
                else bandCount -= 1;
                
                break;
            }

            case 6: {
                if(platCount == 0)
                            cout << "There are no plates left.\n";
                else platCount -= 1;
                
                break;
            }

            default:{
                cout << "Invalid Entry.";
                break;
            }
        }
    }

    void displayItems(){                                                 //without using iostream
        cout<< endl << "Item\t\t\t\tQuantity\n----\t\t\t\t--------\n" 
            << rifl1.getName() << "\t\t\t\t" << rifCount << endl
            << pist1.getName() << "\t\t\t\t" << pistCount << endl
            << gred1.getName() << "\t\t\t\t" << gredCount << endl
            << moll1.getName() << "\t\t\t\t" << mollCount << endl
            << band1.getName() << "\t\t\t\t" << bandCount << endl
            << plat1.getName() << "\t\t\t\t" << platCount << endl << endl;
    }

    // void displayItems(){                                                    //using iostream
    //     cout.setf(ios::left, ios::adjustfield);
    //     cout.width(10);
    //     cout << "\nItem";

    //     cout.setf(ios::right, ios::adjustfield);
    //     cout.width(30);
    //     cout << "Quantity\n";

    //     cout.setf(ios::right, ios::adjustfield);
    //     cout.width(4);
    //     cout << "1. ";
    //     cout.setf(ios::left, ios::adjustfield);
    //     cout.width(29);
    //     cout << rifl1.getName();
    //     cout.setf(ios::left, ios::adjustfield);
    //     cout.width(4);
    //     cout << rifCount << endl;

    //     cout.setf(ios::right, ios::adjustfield);
    //     cout.width(4);
    //     cout << "2. ";
    //     cout.setf(ios::left, ios::adjustfield);
    //     cout.width(29);
    //     cout << pist1.getName();
    //     cout.setf(ios::left, ios::adjustfield);
    //     cout.width(4);
    //     cout << pistCount << endl;

    //     cout.setf(ios::right, ios::adjustfield);
    //     cout.width(4);
    //     cout << "3. ";
    //     cout.setf(ios::left, ios::adjustfield);
    //     cout.width(29);
    //     cout << gred1.getName();
    //     cout.setf(ios::left, ios::adjustfield);
    //     cout.width(4);
    //     cout << gredCount << endl;

    //     cout.setf(ios::right, ios::adjustfield);
    //     cout.width(4);
    //     cout << "4. ";
    //     cout.setf(ios::left, ios::adjustfield);
    //     cout.width(29);
    //     cout << moll1.getName();
    //     cout.setf(ios::left, ios::adjustfield);
    //     cout.width(4);
    //     cout << mollCount << endl;

    //     cout.setf(ios::right, ios::adjustfield);
    //     cout.width(4);
    //     cout << "5. ";
    //     cout.setf(ios::left, ios::adjustfield);
    //     cout.width(29);
    //     cout << band1.getName();
    //     cout.setf(ios::left, ios::adjustfield);
    //     cout.width(4);
    //     cout << bandCount << endl;

    //     cout.setf(ios::right, ios::adjustfield);
    //     cout.width(4);
    //     cout << "6. ";
    //     cout.setf(ios::left, ios::adjustfield);
    //     cout.width(29);
    //     cout << plat1.getName();
    //     cout.setf(ios::left, ios::adjustfield);
    //     cout.width(4);
    //     cout << platCount << endl;

    // }

    Inventory(){
        size = 30;

            while(1){
            int choice;
            cout <<"\nWhat do you want to do?\n\t1. Add\n\t2. Delete\n\t3. Display\n\t4. Exit" << endl << endl;
            cin >> choice;

            switch (choice)
            {
            case 1: {
                addItem();
            }
                break;

            case 2: {
                deleteItems();
            }

            case 3: {
                displayItems();
            }

            case 4: {
                break;
            }

            default:
                break;
            }

            if (choice == 4) break;
            }
    }

    Inventory(int invSize){
        size = invSize;
        
            while(1){
            int choice;
            cout << "\nWhat do you want to do?\n\t1. Add\n\t2. Delete\n\t3. Display\n\t4. Exit" << endl << endl;
            cin >> choice;

            switch (choice)
            {
            case 1: {
                addItem();
                break;
            }

            case 2: {
                deleteItems();
                break;
            }

            case 3: {
                displayItems();
                break;
            }
            
            case 4: {
                break;
            }

            default:
                break;
            }

            if (choice == 4) break;
            }
    }
};