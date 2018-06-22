#ifndef COMPLEXNUMBER_h
#define COMPLEXNUMBER_H

#include<iostream>
#include"number.h"

class ComplexNumber:public Number
{
public:
ComplexNumber(double,double);
~ComplexNumber();
ComplexNumber add(const ComplexNumber& other);
ComplexNumber mul(const ComplexNumber& other);
void print();
private:
double r;
double i;
};

#endif
