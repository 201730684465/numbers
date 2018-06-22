#ifndef INTEGERNUMBER_H
#define INTEGERNUMBER_H
#include<iostream>
#include"number.h"
#include"realnumber.h"
class IntegerNumber:public RealNumber
{
public:
IntegerNumber(int);
~IntegerNumber();
IntegerNumber add(const IntegerNumber& other);
IntegerNumber mul(const IntegerNumber& other);
void print();
private:
int b;
};

#endif
