/**
 * @file main.cpp
 * This application showcases object-oriented programming concepts:
 * 1. PlainBox: A basic box class with item storage capabilities.
 * 2. MagicBox: A specialized box that adds "magic" to the first stored item.
 * 3. ToyBox: A box that can store items of any type and is associated with a color.
 * 4. Exception Handling: Demonstrates exception handling using try and catch blocks.
 *
 * These classes illustrate the use of inheritance, virtual functions, and enums to create a hierarchy of box types.
 */
#include <iostream>
#include <assert.h>
using namespace std;
#include "PlainBox.h"
#include "MagicBox.h"
#include "ToyBox.h"

PlainBox<string> findBox(PlainBox<string> boxes[], int size, string target) throw(logic_error)
{
    int index = 0;
    bool found = false ;
    while (!found && (index < size))
    {
        if (target == boxes[index].getItem())
            found = true ;
        else
            index++;
    } // end while
    throw logic_error("Target not found in a box!");
    //assert(found); // With assertions, the program halts when there is an error
    return boxes[index];
}

int main()
{
    // Create and initialize an array of boxes
    PlainBox<string> myBoxes[5]; // Array of PlainBox objects
    myBoxes[0] = PlainBox<string>("ring");
    myBoxes[1] = PlainBox<string>("hat");
    myBoxes[2] = PlainBox<string>("shirt");
    myBoxes[3] = PlainBox<string>("sock");
    myBoxes[4] = PlainBox<string>("shoe");
    PlainBox<string> foundBox;
    // Try to find a box containing glasses
    try
    {
        foundBox = findBox(myBoxes, 5, "glasses");
    }
    catch(logic_error logErr)
    {
        cout << logErr.what() << endl; // Display error message to user
        foundBox = PlainBox<string>("nothing"); // Fix problem
    }
    catch (exception e) // WRONG ORDER!!
    {
        cout << "Something else was caught" << endl;
    }
    cout << foundBox.getItem();
}



