#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class person
{
protected:
    int id;
    string fName, lName;

public:
    void add_person();
};

#endif // !PERSON_H