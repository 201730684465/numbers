#include<iostream>
#include"integernumber.h"
#include"realnumber.h"
#include"number.h"
using namespace std;

IntegerNumber::IntegerNumber(int A)
:RealNumber(0)
{
b = A;
}

IntegerNumber::~IntegerNumber()
{
}

void IntegerNumber::print()
{
cout << "value is: " << b << endl;
}

IntegerNumber IntegerNumber::add(const IntegerNumber& other)
{
IntegerNumber sample1(b);
sample1.b += other.b;
return sample1;
}

IntegerNumber IntegerNumber::mul(const IntegerNumber& other)
{
IntegerNumber sample1(b);
sample1.b *= other.b;
return sample1;
}

