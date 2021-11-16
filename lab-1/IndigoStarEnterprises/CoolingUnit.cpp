#include <iostream>
#include "./CoolingUnit.h"

using std::cout;
using std::endl;
using std::max;

namespace example
{

    CoolingUnit::CoolingUnit()
    {
        cout << "\nexample::CoolingUnit::CoolingUnit(); invoked\n";
        this->current_temp = 25;
        this->req_temp = 25;
        this->min_temp = -5.5;
        return;
    }

    CoolingUnit::~CoolingUnit()
    {
        cout << "\nexample::CoolingUnit::~CoolingUnit(); invoked\n";
        return;
    }

    void CoolingUnit::set_current_temp(double current_temp)
    {
        cout << "\nexample::CoolingUnit::set_current_temp(); invoked\n";
        this->current_temp = current_temp;
        cout << "Current Temperature set to : " << current_temp << "\n";
        return;
    }

    void CoolingUnit::set_req_temp(double req_temp)
    {
        cout << "\nexample::CoolingUnit::set_req_temp(); invoked\n";
        this->req_temp = req_temp;
        cout << "Required Temperature set to : " << req_temp << "\n";
        return;
    }

    double CoolingUnit::check_current_temp()
    {
        cout << "\nexample::CoolingUnit::check_current_temp(); invoked\n";
        cout << "Current Temperature set is : " << current_temp << "\n";
        return this->current_temp;
    }

    double CoolingUnit::check_req_temp()
    {
        cout << "\nexample::CoolingUnit::check_req_temp(); invoked\n";
        cout << "Required Temperature is : " << req_temp << "\n";
        return this->req_temp;
    }

    void CoolingUnit::cool()
    {
        cout << "\nexample::CoolingUnit::cool(); invoked\n";
        if (req_temp < current_temp)
        {
            cout << "Required Temperature is less than Current Temperature; Cooling Starts!\n";
            comp.switch_on_compressor();
            cout << "Cooling...\n";
            while (current_temp > req_temp && current_temp > min_temp)
            {
                current_temp -= 1.00;
                cout << "Current Temperature: " << current_temp << endl;
            }
            current_temp = max(-5.5, req_temp);

            cout << "Current Temperature: " << current_temp << endl;
            comp.switch_off_compressor();
        }
        else
            cout << "Required Temperature is more than Current Temperature; Nothing happens!\n";
        return;
    }

}