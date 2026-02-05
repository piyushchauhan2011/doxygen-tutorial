#include <iostream>
#include "math/math.h"
#include "service/sum_service.h"
#include "io/writer.h"

// use the default console writer provided by io
#include "io/writer.h"

int main()
{
    int a = 2;
    int b = 3;

    // Direct usage:
    std::cout << "2 + 3 = " << math::add(a, b) << "\n";

    // Use SumService with the console writer
    io::Writer &w = io::default_writer();
    service::SumService svc(w);
    svc.print_sum(a, b);

    return 0;
}
