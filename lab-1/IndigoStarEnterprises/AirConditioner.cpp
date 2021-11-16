#include <iostream>
#include "./AirConditioner.h"

using std::cout;
using std::endl;

namespace example
{

    AirConditioner::AirConditioner()
    {
        
        cout << "\nexample::AirConditioner::AirConditioner(); invoked\n";
        Compressor comp(Compressor::version::SMALL);
        this->comp = comp;
        price = 54000;
        return;
    }

    AirConditioner::~AirConditioner()
    {
        cout << "\nexample::AirConditioner::~AirConditioner(); invoked\n";
        return;
    }

    void AirConditioner::set_temp(double req_temp, double current_temp)
    {

        cout << "\nexample::AirConditioner::set_temp(); invoked\n";
        this->req_temp = req_temp;
        cout << "Required Temperature set to : " << req_temp << "\n";
        this->current_temp = current_temp;
        cout << "Current Temperature set to : " << current_temp << "\n";
        cool();
        return;
    }

}