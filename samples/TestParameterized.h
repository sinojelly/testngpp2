
#include <testngpp/testngpp.hpp>

USING_TESTNGPP_NS

int add(int a, int b)
{
    return a + b;
}

FIXTURE(ParameterizedTests)
{
    DATA_PROVIDER(mydata, 10,
    DATA_GROUP(1, 5, 6),
    DATA_GROUP(30, 80, 110),
    DATA_GROUP(100, -40, 60));

    // @test(data="mydata", tags=fast)
	PTEST((int a, int b, int c), Test a plus b)
	{
        ASSERT_EQ(c, add(a, b));
	}
};
