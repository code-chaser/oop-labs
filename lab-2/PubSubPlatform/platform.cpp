#include <iostream>
#include <map>
using namespace std;

#include "platform.h"

map<int, publisher> platform::publishers;
map<int, subscriber> platform::subscribers;

void platform::published(publisher p)
{
    string info = p.put_information();
    vector<subscriber> subscribers = p.subscribers;
    disseminate(subscribers, p.id, info);
    return;
}

void platform::disseminate(vector<subscriber> subscribers, int pub_id, string info)
{
    for (auto i : subscribers)
        i.recieve_information(pub_id, info);
    return;
}

void platform::show_updates(subscriber s)
{
    for (auto i : s.updates)
    {
        cout << "\nShowing updates from publisher : " << publishers[i.first].fName;
        if (publishers[i.first].lName != "")
            cout << " " << publishers[i.first].lName;
        cout << "\n";
        for (auto j : i.second)
            cout << j << "\n";
    }
    return;
}

void platform::print_subscribers(int pub_id)
{
    cout << "\nList of your subscribers:\n\n";
    for (auto i : publishers[pub_id].subscribers)
    {
        cout << i.fName;
        if (i.lName != "")
            cout << " " << i.lName;
        cout << "\n";
    }
}

void platform::print_subscriptions(int sub_id)
{
    cout << "\nList of publishers that you have subscribed to:\n\n";
    for (auto i : subscribers[sub_id].subscriptions)
    {
        cout << i.fName;
        if (i.lName != "")
            cout << " " << i.lName;
        cout << "\n";
    }
}