#include<cassert>
#include "check_path_lenght.hpp"

void test_fx_fy_is_equal()
{
    assert(check_path_lenght(0,0, 5, 5, 5));
}

int main()
{
    test_fx_fy_is_equal();
}