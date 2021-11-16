#include <iostream>
#include "./Compressor.h"
#include "./CoolingUnit.h"
#include "./AirConditioner.h"
#include "./Freezer.h"

using example::AirConditioner;
using example::Compressor;
using example::CoolingUnit;
using example::Freezer;
using std::cin;
using std::cout;
using std::endl;
using std::max;

void simulate_ac(AirConditioner a)
{
    cout << "\nSimulating Air Conditioner\n";
    double current_temp, req_temp;
    cout << "Set Current Temperature:\n";
    cin >> current_temp;
    cout << "Set Required Temperature:\n";
    cin >> req_temp;

    a.set_temp(req_temp, current_temp);

    return;
}
void simulate_freezer(Freezer f)
{
    while (1)
    {
        cout << "\nSimulating Freezer\n";
        cout << "\nSelect an option:\n"
             << "[01]: Plug-in\n"
             << "[02]: Plug-out\n"
             << "[-1]: Exit\n";
        int option;
        cin >> option;
        switch (option)
        {
        case 1:
            f.plug_in();
            break;
        case 2:
            f.plug_out();
            break;
        case -1:
            return;
            break;
        default:
            cout << "Invalid Option!\n";
            break;
        }
    }
    return;
}

int main()
{
    cout << "\nWELCOME TO INDIGO STAR ENTERPRISES!\n";
    while (1)
    {
        AirConditioner a;
        Freezer f;
        cout << "\nSelect an option:\n"
             << "[01]: Simulate Air Conditioner\n"
             << "[02]: Simulate Freezer\n"
             << "[03]: Check Air Conditioner Price\n"
             << "[04]: Check Freezer Price\n"
             << "[-1]: Exit\n\n";
        int option;
        cin >> option;
        switch (option)
        {
        case 1:
            simulate_ac(a);
            break;
        case 2:
            simulate_freezer(f);
            break;
        case 3:
            cout << "54000 Rupees/-\n";
            break;
        case 4:
            cout << "13000 Rupees/-\n";
            break;
        case -1:
            return 0;
            break;
        default:
            cout << "Invalid Option!\n";
            break;
        }
    }
}
