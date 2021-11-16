#ifndef COMPRESSOR
#define COMPRESSOR

namespace example
{
    class Compressor
    {
    public:
        enum class version
        {
            SMALL = 5,
            LARGE = 30
        };
        //power unit is (0.1*HP)
        enum class status
        {
            ON,
            OFF
        };

    private:
        version comp_size;
        status comp_status;

    public:
        Compressor();
        Compressor(version);
        ~Compressor();
        void switch_on_compressor();
        void switch_off_compressor();
    };
}

#endif // !COMPRESSOR