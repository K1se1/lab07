#include<cassert>
#include "../check_path_lenght.hpp"

void test_start_coords_below_zero()
{
    assert(check_path_lenght(-1, -1, 0, 0, 3));
}


int main()
{
    test_start_coords_below_zero();
}