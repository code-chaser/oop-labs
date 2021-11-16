#include <iostream>
#include "./Freezer.h"

using std::cout;
using std::endl;

namespace example
{
    Freezer::Freezer()
    {

        cout << "\nexample::Freezer::Freezer(); invoked\n";
        Compressor comp(Compressor::version::LARGE);
        this->comp = comp;
        this->current_temp = 25;
        this->req_temp = -5.5;
        this->price = 13000;
        freezer_status = status::PLUGGED_OUT;
        return;
    }
    Freezer::~Freezer()
    {
        cout << "\nexample::Freezer::~Freezer(); invoked\n";
        return;
    }
    void Freezer::plug_in()
    {
        cout << "\nexample::Freezer::plug_in(); invoked\n";
        if (freezer_status == status::PLUGGED_IN)
        {
            cout << "Attempt to plug-in Freezer failed because the freezer is already plugged-in.";
        }
        else
        {
            cout << "Attempt to plug-in Freezer successfull!";
            freezer_status = status::PLUGGED_IN;
            cool();
        }
        return;
    }
    void Freezer::plug_out()
    {
        cout << "\nexample::Freezer::plug_out(); invoked\n";
        if (freezer_status == status::PLUGGED_OUT)
        {
            cout << "Attempt to plug-out Freezer failed because the freezer is already plugged-out.";
        }
        else
        {
            cout << "Attempt to plug-out Freezer successfull!";
            freezer_status = status::PLUGGED_OUT;
        }
        return;
    }
}