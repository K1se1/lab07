#include "task3.hpp"

std::string solve_equality(const std::string& eqlt)
{
    int x_val =0, free_val=0, temp_val =0, counter = 0;
    bool side_of_eqlt;
    std::string answer = "x=";
    for(int i = eqlt.size()-1; i >= 0; --i) // Идем с конца строки
    {
        if(eqlt[i] == 'x') // Если видим x, высчитываем выражения для x
        {
            i--;
            while(i>=0 && eqlt[i] != '+' && eqlt[i] != '-' && eqlt[i] != '=')
            {
                temp_val+=(eqlt[i] - '0')*pow(10, counter);
                counter++;
                i--;
            }
            if(temp_val ==0) temp_val =1;
            if(!side_of_eqlt) temp_val*=-1;
            if(eqlt[i]=='-')  x_val-=temp_val;
            else x_val+=temp_val;
            counter=0;
            temp_val=0;
        }
        else
        {
            while(i >=0 &&eqlt[i] != '+' && eqlt[i] != '-' && eqlt[i] != '=')
            {
                temp_val+=(eqlt[i] - '0')*pow(10, counter);
                counter++;
                i--;
            }
            if(side_of_eqlt) temp_val*=-1;
            if(eqlt[i]=='-')  free_val-=temp_val;
            else free_val+=temp_val;
            counter=0;
            temp_val=0;
        }
        if(eqlt[i] == '=') 
            side_of_eqlt=true;
    }
    if(x_val ==0 && free_val ==0) return "Infinite";
    if(x_val == 0 && free_val != 0) return "No";
    answer = std::to_string(free_val/x_val);
    return answer;
}