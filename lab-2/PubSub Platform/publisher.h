#ifndef PUBLISHER_H
#define PUBLISHER_H

#include <vector>
#include <string>
using namespace std;

#include "person.h"
#include "subscriber.h"

class publisher : public person
{
private:
    vector<subscriber> subscribers;
    friend class platform;
public:
    void add_person();
    void add_subscriber(subscriber);
    string put_information();
};

#endif // !PUBLISHER_H