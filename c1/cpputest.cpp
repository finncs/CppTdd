#include "CppUTest/CommandLineTestRunner.h"

int main(int argc, char** argv) {
    return CommandLineTestRunner::RunAllTests(argc, argv);
}

// clang++ -std=c++17 -I/opt/homebrew/opt/cpputest/include -L/opt/homebrew/opt/cpputest/lib -lCppUTest -lCppUTestExt -pthread cpputest.cpp -o cpputest