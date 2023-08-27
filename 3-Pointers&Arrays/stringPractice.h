/*
   This C++ code defines a function `fun` that manipulates two strings:
   - `x` is modified by erasing, inserting, and appending.
   - `y` is updated by adding a character and changing a character.

   The `runStrPractice` function demonstrates `fun` with two strings, `s1` and `s2`.
   It prints their initial values, calls `fun`, and prints their updated values.

   Additionally, it compares `s1` and `s2` and concatenates them.
*/

void strOperations( string& x, string y )
{
    x.erase( 0, 2 );
    x.insert( 2, y.substr( 1, 2 ) );
    x.append( "***" );
    cout << "x: " << x << endl;
    y += x[0];
    y[2] = 'e';
    cout << "y: " << y << endl;
}
void runStrPractice()
{
    string s1 = "python", s2 = "java";
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    strOperations( s1, s2 );
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl << endl;
    cout << "s1 > s2 = " << (s1 > s2) << endl;
    cout << "s1 + s2 = " << s1 + s2;
}
