#include<iostream>
#include<stdexcept>
#include"realnumber.h"
#include"number.h"
using namespace std;
RealNumber::RealNumber(double A)
{
a = A;
}
RealNumber::~RealNumber()
{
}

void RealNumber::print()
{
cout << "value is " << a << endl;
} 
RealNumber RealNumber::add(const RealNumber& other)
{
RealNumber sample1(a);
sample1.a += other.a;
return sample1;
}

RealNumber RealNumber::mul(const RealNumber& other)
{
RealNumber sample1(a);
sample1.a *= other.a;
return sample1;
}

