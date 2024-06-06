#include<iostream>
#include "check_path_lenght.hpp"
#define max(a, b)  (((a) > (b)) ? (a) : (b)) 

bool check_path_lenght(int sx, int sy, int fx, int fy, unsigned int t)
{
    int min_path = max(abs(fx-sx), abs(fy-sy)) + abs(abs(fx-sx)-abs(fy-sy)); 
    int max_path = abs(fx-sx)+abs(fy-sy);
    return (((t % 2 == 0) == (min_path % 2 == 0)) && (t >=min_path)) || (((t % 2 == 0) == (max_path % 2 == 0)) && (t >=max_path)); // если путь больше или равен
                                                                    // наших путей, то если он имеет такую же четность
                                                                    // что и они, то можно пройти за этот путь
}