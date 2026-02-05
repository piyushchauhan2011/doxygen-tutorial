/**
 * @file sum_service.h
 * @brief Small service that prints the sum of two integers using a `Writer`.
 */

#pragma once

#include <memory>

namespace io
{
    class Writer;
}

namespace service
{
    class SumService
    {
    public:
        explicit SumService(io::Writer &writer);
        void print_sum(int a, int b);

    private:
        io::Writer &writer_;
    };
}
