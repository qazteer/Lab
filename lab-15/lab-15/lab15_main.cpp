#include <iostream>
#include "element.h"
using namespace std;
element make_element(double F, double  S)
{
element t; 
t.Init(F,S); 
return t; 
}


int main()
{ 
element A;
element B;
A.Init(3.0,2); 
B.Read(); 
A.Show(); 
B.Show(); 
cout<<"A.Element("<<A.first<<","<<A.second<<")="<<A.Element(2)<<endl;
cout<<"B.Element("<<B.first<<","<<B.second<<")="<<B.Element(2)<<endl;

element *X=new element; 
X->Init(2.0,5); 
X->Show(); 
X->Element(3); 
cout<<"X.Element("<<X->first<<","<<X->second<<")="<<X->Element(3)<<endl;

element mas[3]; 
for (int i=0;i<3; i++)
mas[i].Read(); 
for (int i=0;i<3; i++)
mas[i].Show(); 
for (int i=0;i<3; i++) {
mas[i].Element(4); 
cout<<"mas["<<i<<"].Element("<<mas[i].first<<","<<mas[i].second<<")=";
cout<<mas[i].Element(4)<<endl; }

element* p_mas=new element[3]; 
for (int i=0;i<3; i++)
p_mas[i].Read(); 
for (int i=0;i<3; i++)
p_mas[i].Show(); 
for (int i=0;i<3; i++)
{
p_mas[i].Element(5); 
cout<<"p_mas["<<i<<"].Element("<<p_mas[i].first<<","<<p_mas[i].second;
cout<<")="<<p_mas[i].Element(5)<<endl;
}

double  y; double  z;
cout<<"first?";
cin>>y;
cout<<"second?";
cin>>z;

element F=make_element(y,z);
F.Show();
return 0;
}