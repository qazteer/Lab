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
cout<<"A.distance("<<A.first<<","<<A.second<<")="<<A.distance()<<endl;
cout<<"B.distance("<<B.first<<","<<B.second<<")="<<B.distance()<<endl;

Distance *X=new Distance; 
X->Init(2.0,5.5); 
X->Show(); 
X->distance(); 
cout<<"X.distance("<<X->first<<","<<X->second<<")="<<X->distance()<<endl;

Distance mas[3]; 
for (int i=0;i<3; i++)
mas[i].Read(); 
for (int i=0;i<3; i++)
mas[i].Show(); 
for (int i=0;i<3; i++) {
mas[i].distance(); 
cout<<"mas["<<i<<"].distance("<<mas[i].first<<","<<mas[i].second<<")=";
cout<<mas[i].distance()<<endl; }

Distance* p_mas=new Distance[3]; 
for (int i=0;i<3; i++)
p_mas[i].Read(); 
for (int i=0;i<3; i++)
p_mas[i].Show(); 
for (int i=0;i<3; i++)
{
p_mas[i].distance(); 
cout<<"p_mas["<<i<<"].distance("<<p_mas[i].first<<","<<p_mas[i].second;
cout<<")="<<p_mas[i].distance()<<endl;
}

int y; int z;
cout<<"first?";
cin>>y;
cout<<"second?";
cin>>z;

Distance F=make_Distance(y,z);
F.Show();
return 0;
}