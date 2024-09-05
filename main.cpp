#include <iostream>
#include "library1.hpp"

int main()
{
    std::cout << "Building with bazel: " << BazelEx::DoSomething(2) << "\n";
}