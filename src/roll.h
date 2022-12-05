//
#ifndef ROLL_H
#define ROLL_H
#include "die.h"

class Roll
{
private:
    Die& die1;
    Die& die2;
    bool rolled{false};
    int value;
public:
    Roll(Die& ex1, Die& ex2);
    void roll_die();
    const int roll_value(){return value;} ;
    
};

#endif