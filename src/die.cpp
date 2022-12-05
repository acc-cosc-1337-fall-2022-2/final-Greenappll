#include "die.h"
#include<iostream>

using std::cout;
using std::cin;

void Die::roll()
{
    roll_value = 1 + (rand()%sides);
}

int Die::rolled_value()const
{
    return roll_value;
}