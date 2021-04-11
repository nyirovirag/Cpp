#include <iostream>
#include "NumEnor.hpp"

using namespace std;

int main()
{
    NumEnor e("input.txt");
    Num max;

    bool isThere = false;

    e.first();
    while (!e.end())
    {
        if (!isThere || e.current().occurrence > max.occurrence)
        {
            isThere = true;
            max = e.current();
        }
        //cout << e.current().number << "'s occurence is: " <<  e.current().occurrence<< endl;
        e.next();
    }

    cout << "Most frequent number is " << max.number << ". It occurs " << max.occurrence << " times." << endl;

    return 0;
}
