#include <iostream>
#include <string>
using namespace std;

#include "publisher.h"
#include "platform.h"

void publisher::add_person()
{
    person::add_person();
    if (platform::publishers.rbegin() != platform::publishers.rend())
        id = (platform::publishers.rbegin()->first) + 1;
    else
        id = 1;
    platform::publishers[id] = *this;
    cout << "\nRegistered Successfully\nYour ID is: " << id << "\n\n";
    return;
}

void publisher::add_subscriber(subscriber s)
{
    subscribers.push_back(s);
    return;
}

string publisher::put_information()
{
    string info;
    cout << "\nEnter the information you want to publish:\n";
    getline(cin >> ws, info);
    return info;
}