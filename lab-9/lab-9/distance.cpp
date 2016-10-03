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
cout<<"\n x?";
cin>>first;
cout<<"\n y?";
cin>>second;
}

void Distance::Show()
{
cout<<"\n x="<<first;
cout<<"\n y="<<second;
cout<<"\n";
}

double Distance::distance(double x1, double y1)
{
	double g = x1 - first;
	double h = y1 - second;
return sqrt(pow(g, 2)+pow(h, 2));
}