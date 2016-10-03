#include <iostream>
#include"summa.h"
#include <math.h>
using namespace std;

void summa::Init(int F, int S)
{
first=F; second=S;
}

void summa::Read()
{
cout<<"\n first?";
cin>>first;
cout<<"\n second?";
cin>>second;
}

void summa::Show()
{
cout<<"\n first="<<first;
cout<<"\n second="<<second;
cout<<"\n";
}

double summa::Summa()
{
return first/31*second;
}