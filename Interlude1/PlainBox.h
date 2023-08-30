/** @file PlainBox.h */
#ifndef _PLAIN_BOX
#define _PLAIN_BOX
#include "BoxInterface.h"
template<class ItemType> // Indicates this is a template definition

class PlainBox : public BoxInterface<ItemType>
{
private :
    ItemType item;
public :
    PlainBox(){}
    PlainBox( const ItemType& theItem){
        item = theItem;
    }
    void setItem( const ItemType& theItem) override {
        item = theItem;
    }
    ItemType getItem() const override{
        return item;
    }
};
#endif
