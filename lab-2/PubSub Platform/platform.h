#ifndef PLATFORM_H
#define PLATFORM_H

#include <map>
using namespace std;

#include "publisher.h"
#include "subscriber.h"

class platform
{
public:
    static map<int, publisher> publishers;
    static map<int, subscriber> subscribers;

    static void published(publisher);
    static void disseminate(vector<subscriber>, int, string);
    static void show_updates(subscriber);
    static void print_subscribers(int);
    static void print_subscriptions(int);
};

#endif // !PLATFORM_H