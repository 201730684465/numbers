#ifndef REALNUMBER_H
#define REALNUMBER_H
#include<iostream>
#include"number.h"

class RealNumber : public Number
{
public:
 RealNumber(double);
~RealNumber();
void print();
RealNumber add(const RealNumber& other);
RealNumber mul(const RealNumber& other);
private:
double a;
};
#endif

