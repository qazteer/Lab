#include <iostream>
#include "distance.h"
using namespace std;
Distance make_Distance(double F, double S)
{
Distance t; 
t.Init(F,S); 
return t; 
}


int main()
{ 
Distance A;
Distance B;
A.Init(3.0,2.4); 
B.Read(); 
A.Show(); 
B.Show(); 
cout<<"A.distance("<<A.first<<","<<A.second<<")="<<A.distance(3.0,2.4)<<endl;
cout<<"B.distance("<<B.first<<","<<B.second<<")="<<B.distance(4.0,2.4)<<endl;

Distance *X=new Distance; 
X->Init(2.0,5.5); 
X->Show(); 
X->distance(5.5,9.9); 
cout<<"X.distance("<<X->first<<","<<X->second<<")="<<X->distance(4.2,6.6)<<endl;

Distance mas[3]; 
for (int i=0;i<3; i++)
mas[i].Read(); 
for (int i=0;i<3; i++)
mas[i].Show(); 
for (int i=0;i<3; i++) {
mas[i].distance(8.8,9.9); 
cout<<"mas["<<i<<"].distance("<<mas[i].first<<","<<mas[i].second<<")=";
cout<<mas[i].distance(10.5,20.5)<<endl; }

Distance* p_mas=new Distance[3]; 
for (int i=0;i<3; i++)
p_mas[i].Read(); 
for (int i=0;i<3; i++)
p_mas[i].Show(); 
for (int i=0;i<3; i++)
{
p_mas[i].distance(5.5,10.10); 
cout<<"p_mas["<<i<<"].distance("<<p_mas[i].first<<","<<p_mas[i].second;
cout<<")="<<p_mas[i].distance(8.8,12.12)<<endl;
}

int y; int z;
cout<<"x?";
cin>>y;
cout<<"y?";
cin>>z;

Distance F=make_Distance(y,z);
F.Show();
return 0;
}