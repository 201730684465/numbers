#include<iostream>
#include"complexnumber.h"
#include"number.h"

using namespace std;
ComplexNumber::ComplexNumber(double R,double I)
{
r = R;
i = I;
}

ComplexNumber::~ComplexNumber()
{
}

void ComplexNumber::print()
{
cout << "value is: " << r;
if(i > 0)
cout << "+";
cout << i << "j" << endl;
}

ComplexNumber ComplexNumber::add(const ComplexNumber& other)
{
ComplexNumber sample1(r,i);
sample1.r += other.r;
sample1.i += other.i;
return sample1;
}
ComplexNumber ComplexNumber::mul(const ComplexNumber& other)
{
ComplexNumber sample1(r,i);
sample1.r = r * other.r - i * other.i;
sample1.i = r * other.i + i * other.r;
return sample1;
}


