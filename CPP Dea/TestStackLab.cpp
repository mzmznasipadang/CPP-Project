//Program to demonstrate use of the Stack class.
#include "stdafx.h"
#include <iostream>
#include "stack.h"
using namespace std;

int main( )
{
    Stack s;

    int number;

    cout << "Enter a series of numbers separated by spaces and ended with a -1" << endl;
    cin >> number;
    while (number != -1)
    {
        s.push(number);
        cin >> number;
    }

    cout << "Written backward that is: " << endl;
    while ( ! s.empty( ) )
        cout << s.pop( ) << endl;

    return 0;
}