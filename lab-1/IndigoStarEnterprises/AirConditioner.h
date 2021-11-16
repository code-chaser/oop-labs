#ifndef AIR_CONDITIONER
#define AIR_CONDITIONER

#include "./CoolingUnit.h"

namespace example
{
    class AirConditioner : private CoolingUnit
    {
    private:
        int price;

    public:
        AirConditioner();
        ~AirConditioner();
        void set_temp(double,double);
    };
}

#endif // !AIR_CONDITIONER