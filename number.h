#ifndef NUMBER_H
#define NUMBER_H
#include<iostream>

class Number
{
public:
virtual void print(){}
virtual Number add(const Number&other)
{return *this;}
virtual Number mul(const Number&other)
{return *this;}
}
;
#endif
