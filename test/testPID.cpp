#include <gtest/gtest.h>
#include"../include/PID_controller.h"
#include"TestPID.hpp"
#include"PID_controller.cpp"

/*
TEST(dummy, should_pass)
{
    EXPECT_EQ(1, 1);
}
*/
TEST(testPID, test_1){
    PID_controller test_pid;
    TestPID test;
    EXPECT_NE(test.PIDparam(test_pid),NULL);
    EXPECT_EQ(test_pid.Calcu_error(40,10),30);
    EXPECT_GE(0.1,test.PIDcalcu());

}
