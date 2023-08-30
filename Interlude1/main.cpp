#include <iostream>
using namespace std;
#include "PlainBox.h"
#include "ToyBox.h"
#include "MagicBox.h"

int main()
{
    PlainBox<double> box1(10.1);
    cout << "Box1 item : " << box1.getItem() << endl;
    box1.setItem(10.2);
    cout << "Box1 item : " << box1.getItem() << endl;

    ToyBox<int> box2;
    ToyBox<int> box3( GREEN );
    ToyBox<int> box4( 10, RED );

    MagicBox<string> box5( "Fire spell" );
    MagicBox<string> box6( "Electro spell" );
    MagicBox<string> box7;
    box6.setItem( "Water spell" );
    box7.setItem( "Blood spell" );

    cout << "Box2 item : " << box2.getItem() << "\tBox2 color : " << box2.getColor() << endl;
    cout << "Box3 item : " << box3.getItem() << "\tBox3 color : " << box3.getColor() << endl;
    cout << "Box4 item : " << box4.getItem() << "\tBox4 color : " << box4.getColor() << endl;
    cout << "Box5 spell : " << box5.getItem() << endl;
    cout << "Box6 spell : " << box6.getItem() << endl;
    cout << "Box7 spell : " << box7.getItem() << endl;


    // Problems about object-slicing, need to use pointers
    PlainBox<string> cardBox;
    cardBox = MagicBox<string>("Queen of Hearts");
    cardBox.setItem("Jack of Spades");
    string myFirstCard = cardBox.getItem();
    cout << myFirstCard << endl;



    return 0;
}


