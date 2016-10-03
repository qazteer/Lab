#include <iostream>
#include"element.h"
#include <math.h>
using namespace std;

void element::Init(double F, double S)
{
first=F; second=S;
}

void element::Read()
{
cout<<"\n first?";
cin>>first;
cout<<"\n second?";
cin>>second;
}

void element::Show()
{
cout<<"\n first="<<first;
cout<<"\n second="<<second;
cout<<"\n";
}

double element::Element(int j)
{
return first * pow(second, j) ;
}