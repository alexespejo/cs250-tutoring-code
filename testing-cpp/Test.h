#ifndef TEST 
#define TEST 
#include <iostream>
#include <string>

class Test {
    public:
        Test(): name("Alex"){};
        Test(const std::string& n): name(n) {};
        void printer();
    private:
        std::string name;
};
#endif