#ifndef COOLING_UNIT
#define COOLING_UNIT

#include "./Compressor.h"

namespace example
{
    class CoolingUnit
    {
    protected:
        double current_temp;
        double req_temp;
        double min_temp;
        //temperature unit is degree celsius;
        Compressor comp;

    public:
        CoolingUnit();
        ~CoolingUnit();
        void set_current_temp(double);
        void set_req_temp(double);
        double check_current_temp();
        double check_req_temp();
        void cool();
    };
}

#endif // !COOLING_UNIT