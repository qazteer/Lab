#include <iostream>
#include "multiply.h"
using namespace std;
multiply make_multiply( int F, double S)
{
multiply t; 
t.Init(F,S); 
return t; 
}


int main()
{ 
multiply A;
multiply B;
A.Init(3,20.25); 
B.Read(); 
A.Show(); 
B.Show(); 
cout<<"A.Multiply("<<A.first<<","<<A.second<<")="<<A.Multiply(5)<<endl;
cout<<"B.Multiply("<<B.first<<","<<B.second<<")="<<B.Multiply(5)<<endl;

multiply *X=new multiply; 
X->Init(20,2.55); 
X->Show(); 
X->Multiply(2); 
cout<<"X.Multiply("<<X->first<<","<<X->second<<")="<<X->Multiply(2)<<endl;

multiply mas[3]; 
for (int i=0;i<3; i++)
mas[i].Read(); 
for (int i=0;i<3; i++)
mas[i].Show(); 
for (int i=0;i<3; i++) {
mas[i].Multiply(10); 
cout<<"mas["<<i<<"].Multiply("<<mas[i].first<<","<<mas[i].second<<")=";
cout<<mas[i].Multiply(10)<<endl; }

multiply* p_mas=new multiply[3]; 
for (int i=0;i<3; i++)
p_mas[i].Read(); 
for (int i=0;i<3; i++)
p_mas[i].Show(); 
for (int i=0;i<3; i++)
{
p_mas[i].Multiply(5); 
cout<<"p_mas["<<i<<"].Multiply("<<p_mas[i].first<<","<<p_mas[i].second;
cout<<")="<<p_mas[i].Multiply(5)<<endl;
}

int y; double z;
cout<<"first?";
cin>>y;
cout<<"second?";
cin>>z;

multiply F=make_multiply(y,z);
F.Show();
return 0;
}