#include <iostream>
#include "./Compressor.h"

using std::cout;
using std::endl;

namespace example
{
    Compressor::Compressor()
    {
        cout << "\nexample::Compressor::Compressor(); invoked\n";
        this->comp_status = status::OFF;
        return;
    }    

    Compressor::Compressor(Compressor::version comp_size=Compressor::version::SMALL)
    {
        cout << "\nexample::Compressor::Compressor(); invoked\n";
        this->comp_size = comp_size;
        this->comp_status = status::OFF;
        return;
    }

    Compressor::~Compressor()
    {
        cout << "\nexample::Compressor::~Compressor(); invoked\n";
        return;
    }

    void Compressor::switch_on_compressor()
    {
        cout << "\nexample::Compressor::switch_on_compressor(); invoked\n";
        if (this->comp_status == status::ON)
        {
            cout << "Attempt to switch ON compressor failed because the compressor is already turned ON.\n";
        }
        else
        {
            this->comp_status = status::ON;
            cout << "Attempt to switch ON compressor successful!\n";
        }
        return;
    }

    void Compressor::switch_off_compressor()
    {
        cout << "\nexample::Compressor::switch_off_compressor(); invoked\n";
        if (this->comp_status == status::OFF)
        {
            cout << "Attempt to switch OFF compressor failed because the compressor is already turned OFF.\n";
        }
        else
        {
            this->comp_status = status::OFF;
            cout << "Attempt to switch OFF compressor successful!\n";
        }
        return;
    }

}