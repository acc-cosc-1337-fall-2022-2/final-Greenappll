//
#include "roll.h"

Roll::Roll(Die& ex1, Die& ex2): die1(ex1), die2(ex2){}

void Roll::roll_die()
{
    die1.roll();
    die2.roll();
    int first_roll = die1.rolled_value();
    int second_roll = die2.rolled_value();

    value = first_roll + second_roll;

    rolled = true;
}