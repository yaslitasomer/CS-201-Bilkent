/** @file PlainBox.h */
#ifndef _PLAIN_BOX
#define _PLAIN_BOX
template < class ItemType> // Indicates this is a template
// Declaration for the class PlainBox
class PlainBox
{
private :
    ItemType item;
public :
    PlainBox() {}
    PlainBox( const ItemType& theItem)
    {
        item = theItem;
    }
    virtual void setItem( const ItemType& theItem)
    {
        item = theItem;
    }
    virtual ItemType getItem() const
    {
        return item;
    }
    void placeInBox(PlainBox<string>* theBox, string theItem)
    {
        theBox->setItem(theItem);
    }


};
#endif

