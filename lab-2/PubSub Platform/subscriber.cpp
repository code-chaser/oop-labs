#include <iostream>
#include <string>
using namespace std;

#include "subscriber.h"
#include "platform.h"

void subscriber::add_person()
{
    person::add_person();
    if (platform::subscribers.rbegin() != platform::subscribers.rend())
        id = (platform::subscribers.rbegin()->first) + 1;
    else
        id = 1;
    platform::subscribers[id] = *this;
    cout << "\nRegistered Successfully\nYour ID is: " << id << "\n";
    return;
}

void subscriber::subscribe()
{
    int pub_id;
    cout << "\nEnter the ID of the publisher you want to subscribe:\n";
    cin >> pub_id;
    if (platform::publishers.find(pub_id) == platform::publishers.end())
    {
        cout << "\nIncorrect ID!\n";
        return;
    }
    subscriptions.push_back(platform::publishers[pub_id]);
    platform::publishers[pub_id].add_subscriber(*this);
    cout << "\nSubscribed!\n";
    return;
}

void subscriber::recieve_information(int pub_id, string info)
{
    platform::subscribers[id].updates[pub_id].push_back(info);
    return;
}