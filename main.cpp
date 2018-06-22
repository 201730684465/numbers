#include<iostream>
#include"number.h"
#include"realnumber.h"
#include"complexnumber.h"
#include"integernumber.h"
using namespace std;
int main()
{
RealNumber R1(2.45),R2(6.65);
IntegerNumber I1(15),I2(50);
ComplexNumber C1(5,9),C2(9,-5);
R2.add(R1).print();
R2.mul(R1).print();
R2.print();
I2.add(I1).print();
I2.mul(I1).print();
I2.print();
C2.add(C1).print();
C2.mul(C1).print();
C2.print();
return 0;
}

