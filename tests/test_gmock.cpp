#include <gmock/gmock.h>
#include "service/sum_service.h"
#include "io/writer.h"

using ::testing::Eq;
using ::testing::StrEq;

class MockWriter : public io::Writer
{
public:
    MOCK_METHOD(void, write, (const std::string &text), (override));
};

TEST(SumServiceMockTest, CallsWriterWithFormattedSum)
{
    MockWriter mock;
    // Expect the writer to be called with the exact formatted string
    EXPECT_CALL(mock, write(StrEq("2 + 3 = 5\n")));

    service::SumService svc(mock);
    svc.print_sum(2, 3);
}
