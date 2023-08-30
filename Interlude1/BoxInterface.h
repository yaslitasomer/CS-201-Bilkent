//BoxInterface is an abstract class, because it contains at
//least one pure virtual method. Remember that abstract classes
//cannot be directly instantiated.
/** @file BoxInterface.h */
#ifndef _BOX_INTERFACE
#define _BOX_INTERFACE

template < class ItemType>
class BoxInterface
{
public :
    virtual void setItem( const ItemType& theItem) = 0;
    virtual ItemType getItem() const = 0;
}; // end BoxInterface
#endif
