#include "UnitTest.h"
#include "EquivalenceTest.h"

int main() {
    UnitTest unitTest;
    unitTest.runTests();
    EquivalenceTests equivalenceTests;
    equivalenceTests.runTests();
    return 0;
}