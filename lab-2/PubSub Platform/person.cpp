#include <iostream>
#include <string>
using namespace std;

#include "person.h"

void person::add_person()
{
    cout << "\nEnter the first name (required):\n";
    getline(cin >> ws, fName);
    cout << "\nEnter the last name (optional):\n";
    getline(cin, lName);
    return;
}
