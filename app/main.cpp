#include <iostream>
#include"PID_controller.h"
#include"TestPID.hpp"

int main()
{
    PID_controller test_pid;
    TestPID test;
    test.PIDparam(test_pid);
    test.PIDcalcu();
    std::cout<<"You passed the Unit test!"<<std::endl;
    return 0;
}
