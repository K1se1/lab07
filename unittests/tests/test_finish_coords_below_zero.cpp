#include<cassert>
#include "..\check_path_lenght.hpp"

void test_finish_coords_below_zero()
{
    assert(check_path_lenght(0, 0, -1, -1, 3));
}

int main()
{
    test_finish_coords_below_zero();
}