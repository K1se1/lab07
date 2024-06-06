#include "wash_the_room.hpp"

/**
 * @brief Задание к задаче 
 * 
 * @param n количество человек 
 * @param time время в секундах
 * @return int в случае некорректных входных данных возвращает -1
 */
int wash_the_room(int n, int time)
{
    if(time == 0) return 1;
    if(n <1 || time < 0) return -1;
    return (n%time)+1;
}