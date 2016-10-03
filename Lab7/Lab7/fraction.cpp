#include <iostream>
#include"fraction.h"
#include <math.h>
using namespace std;

void fraction::Init(double F, int S)
{
first=F; second=S;
}

void fraction::Read()
{
cout<<"\n first?";
cin>>first;
cout<<"\n second?";
cin>>second;
}

void fraction::Show()
{
cout<<"\n first="<<first;
cout<<"\n second="<<second;
cout<<"\n";
}

double fraction::Power()
{
return pow (first,second);
}