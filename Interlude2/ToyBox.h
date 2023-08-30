/** @file ToyBox.h */
#ifndef _TOY_BOX
#define _TOY_BOX
#include "PlainBox.h"
enum Color {BLACK, RED, BLUE, GREEN, YELLOW, WHITE};

template < class ItemType>
class ToyBox : public PlainBox<ItemType>
{
private :
    Color boxColor;
public :
    ToyBox()
    {
        PlainBox<ItemType>();
        boxColor = BLACK;
    }

    ToyBox( const Color& theColor)
    {
        PlainBox<ItemType>();
        boxColor = theColor;
    }
    ToyBox( const ItemType& theItem, const Color& theColor)
    {
        PlainBox<ItemType>();
        PlainBox<ItemType>::setItem(theItem);
        boxColor = theColor;
    }
    Color getColor() const
    {
        return boxColor;
    }

    void setItem( const ItemType& theItem) override
    {
        PlainBox<ItemType>::setItem(theItem);
    }
};
#endif

