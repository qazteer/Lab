#include <iostream>
#include"function.h"
#include <math.h>
using namespace std;

void Functionn::Init(double F, double S)
{	
first=F; second=S;		
}

void Functionn::Read()
{
cout<<"\n first?";
cin>>first;
cout<<"\n second?";
cin>>second;
}

void Functionn::Show()
{
cout<<"\n first="<<first;
cout<<"\n second="<<second;
cout<<"\n";
}

double Functionn::Function(double x)
{
	return first*x + second;
}