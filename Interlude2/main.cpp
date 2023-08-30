/**
 * @file main.cpp
 * This application showcases object-oriented programming concepts:
 * 1. PlainBox: A basic box class with item storage capabilities.
 * 2. MagicBox: A specialized box that adds "magic" to the first stored item.
 * 3. ToyBox: A box that can store items of any type and is associated with a color.
 *
 * These classes illustrate the use of inheritance, virtual functions, and enums to create a hierarchy of box types.
 */
#include <iostream>
using namespace std;
#include "PlainBox.h"
#include "MagicBox.h"
#include "ToyBox.h"

void placeInBox( PlainBox<string>*, string );
int main()
{
    //To fully implement late binding, we must create the variables in the free store and use pointers to reference them.
    string specialItem = "Riches beyond compare!";
    string otherItem = "Hammer";
    MagicBox<string>* myMagicBoxPtr = new MagicBox<string>();
    placeInBox(myMagicBoxPtr, otherItem);
    placeInBox(myMagicBoxPtr, specialItem);
    cout << myMagicBoxPtr->getItem() << endl;
    delete myMagicBoxPtr;
    myMagicBoxPtr = nullptr ;
}

void placeInBox(PlainBox<string>* theBox, string theItem)
{
    theBox->setItem(theItem);
}
