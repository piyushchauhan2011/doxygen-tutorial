#include "service/sum_service.h"
#include "io/writer.h"
#include "math/math.h"
#include <string>

namespace service
{

    SumService::SumService(io::Writer &writer) : writer_(writer) {}

    void SumService::print_sum(int a, int b)
    {
        int s = math::add(a, b);
        writer_.write(std::to_string(a) + " + " + std::to_string(b) + " = " + std::to_string(s) + "\n");
    }

} // namespace service
