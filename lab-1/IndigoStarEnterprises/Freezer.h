#ifndef FREEZER
#define FREEZER

#include "./CoolingUnit.h"

namespace example
{
    class Freezer : private CoolingUnit
    {
    private:
        enum class status
        {
            PLUGGED_IN,
            PLUGGED_OUT
        };
        status freezer_status;
        int price;

    public:
        Freezer();
        ~Freezer();
        void plug_in();
        void plug_out();
    };
}

#endif // !FREEZER