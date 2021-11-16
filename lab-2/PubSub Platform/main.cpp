#include <iostream>
using namespace std;

#include "person.h"
#include "publisher.h"
#include "subscriber.h"
#include "platform.h"

int main()
{
    while (1)
    {
        int purpose = 0;
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "\nSelect an option:\n\n";

        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
        cout << "[01] : Register a new Publisher\n";
        cout << "[02] : Register a new Subscriber\n";
        cout << "[03] : Login to platform as a publisher\n";
        cout << "[04] : Login to platform as a subscriber\n\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

        cout << "[-1] : Exit\n";
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cin >> purpose;
        if (purpose == -1)
        {
            cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "\nClosing Platform...\n";
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            break;
        }
        cout << "\n";
        if (purpose == 1)
        {
            publisher p;
            p.add_person();
        }
        else if (purpose == 2)
        {
            subscriber s;
            s.add_person();
        }
        else if (purpose == 3)
        {
            int pub_id;
            cout << "\nEnter your ID:\n";
            cin >> pub_id;
            if (platform::publishers.find(pub_id) == platform::publishers.end())
            {
                cout << "\nIncorrect ID\n";
            }
            else
            {
                cout << "\nSelect an option:\n\n";
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
                cout << "[01] : See all subscribers\n";
                cout << "[02] : Put Information\n\n";
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
                cin >> purpose;
                if (purpose == 1)
                {
                    platform::print_subscribers(pub_id);
                }
                else if (purpose == 2)
                {
                    platform::published(platform::publishers[pub_id]);
                }
                else
                {
                    cout << "\nInvalid Choice!\n";
                }
            }
        }
        else if (purpose == 4)
        {
            int sub_id;
            cout << "\nEnter your ID:\n";
            cin >> sub_id;
            if (platform::subscribers.find(sub_id) == platform::subscribers.end())
            {
                cout << "\nIncorrect ID\n";
            }
            else
            {
                cout << "\nSelect an option:\n\n";
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
                cout << "[01] : See all subscriptions\n";
                cout << "[02] : Subscribe to a publisher\n";
                cout << "[03] : Check updates\n\n";
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
                cin >> purpose;
                if (purpose == 1)
                {
                    platform::print_subscriptions(sub_id);
                }
                else if (purpose == 2)
                {
                    platform::subscribers[sub_id].subscribe();
                }
                else if (purpose == 3)
                {
                    platform::show_updates(platform::subscribers[sub_id]);
                }
                else
                {
                    cout << "\nInvalid Choice!\n";
                }
            }
        }
        else
        {
            cout << "\nInvalid Choice!\n";
        }
    }
    return 0;
}