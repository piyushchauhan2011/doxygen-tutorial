#include "io/writer.h"
#include <iostream>

namespace io
{
    class ConsoleWriter : public Writer
    {
    public:
        void write(const std::string &text) override
        {
            std::cout << text;
        }
    };

    // Provide a simple factory function used by the app (internal linkage)
    Writer &default_writer()
    {
        static ConsoleWriter cw;
        return cw;
    }
}
