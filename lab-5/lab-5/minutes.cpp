#include <iostream>
#include"minutes.h"
#include<conio.h>
using namespace std;

void minutes::Init(int F, int S)
{
first=F; second=S;
}

void minutes::Read()
{
cout<<"\n first?";
cin>>first;
cout<<"\n second?";
cin>>second;
}

void minutes::Show()
{
cout<<"\n first="<<first;
cout<<"\n second="<<second;
cout<<"\n";
}

int minutes::Minutes()
{
return (60*first+second);
}