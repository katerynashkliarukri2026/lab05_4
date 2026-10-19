
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab05_4/functions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab05_4_tests
{
    TEST_CLASS(ProductTests)
    {
    public:

        TEST_METHOD(TestAllProductMethods)
        {
            double expected = P0(1, 15);

            Assert::AreEqual(expected, P1(1, 15, 1), 1e-30);
            Assert::AreEqual(expected, P2(1, 15, 15), 1e-30);
            Assert::AreEqual(expected, P3(1, 15, 1, 1.0), 1e-30);
            Assert::AreEqual(expected, P4(1, 15, 15, 1.0), 1e-30);
        }
    };
}
