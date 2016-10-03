#include <iostream>
#include"multiply.h"
#include <math.h>
using namespace std;

void multiply::Init(int F, double S)
{
first=F; second=S;
}

void multiply::Read()
{
cout<<"\n first?";
cin>>first;
cout<<"\n second?";
cin>>second;
}

void multiply::Show()
{
cout<<"\n first="<<first;
cout<<"\n second="<<second;
cout<<"\n";
}

double multiply::Multiply(double k)
{
double f, s, t;
modf(first, &f);
s = fabs(modf(second, &t));
return ((s + f) * k);
}