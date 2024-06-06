#include<iostream>
#include<cassert>
#include "wash_the_room.hpp"


void test_wash_time_equal_n()
{
    assert(wash_the_room(5, 5)==1);
}

void test_wash_time_equal_zero()
{
    assert(wash_the_room(5,0)==1);
}

void test_wash_invalid_input()
{
    assert(wash_the_room(0, -5)==-1);
}


int main(int, char**){
   std::cout << "test_wash_time_equal_n..." << std::flush;
   test_wash_time_equal_n();
   std::cout << "OK!!!\n";
   std::cout << "test_wash_time_equal_zero..." << std::flush;
   test_wash_time_equal_zero();
   std::cout << "OK!!!\n";
   std::cout << "test_wash_invalid_input..." << std::flush;
   test_wash_invalid_input();
   std::cout << "OK!!!\n";
}
