#include <iostream>
#include"distance.h"
#include <math.h>
using namespace std;

void Distance::Init(double F, double S)
{
first=F; second=S;
}

void Distance::Read()
{
cout<<"\n first?";
cin>>first;
cout<<"\n second?";
cin>>second;
}

void Distance::Show()
{
cout<<"\n first="<<first;
cout<<"\n second="<<second;
cout<<"\n";
}

double Distance::distance()
{
return sqrt(pow(first,2)+pow(second,2));
}