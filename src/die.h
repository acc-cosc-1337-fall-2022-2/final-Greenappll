#include<iostream>

class Die
{
private:
    int roll_value;
    int sides{6};
public:
    void roll();
    int rolled_value() const;
};
