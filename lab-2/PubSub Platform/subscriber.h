#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include <map>
#include <vector>
#include <string>
using namespace std;

#include "person.h"

class publisher;

class subscriber : public person
{
private:
    vector<publisher> subscriptions;
    map<int, vector<string>> updates;
    friend class platform;

public:
    void add_person();
    void subscribe();
    void recieve_information(int, string);
};

#endif // !SUBSCRIBER_H