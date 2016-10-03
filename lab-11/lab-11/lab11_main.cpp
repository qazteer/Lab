#include <iostream>
#include "summa.h"
using namespace std;
summa make_summa(int F, int S)
{
summa t; 
t.Init(F,S); 
return t; 
}


int main()
{ 
summa A;
summa B;
A.Init(300,21); 
B.Read(); 
A.Show(); 
B.Show(); 
cout<<"A.summa("<<A.first<<","<<A.second<<")="<<A.Summa()<<endl;
cout<<"B.summa("<<B.first<<","<<B.second<<")="<<B.Summa()<<endl;

summa *X=new summa; 
X->Init(200,15); 
X->Show(); 
X->Summa(); 
cout<<"X.summa("<<X->first<<","<<X->second<<")="<<X->Summa()<<endl;

summa mas[3]; 
for (int i=0;i<3; i++)
mas[i].Read(); 
for (int i=0;i<3; i++)
mas[i].Show(); 
for (int i=0;i<3; i++) {
mas[i].Summa(); 
cout<<"mas["<<i<<"].summa("<<mas[i].first<<","<<mas[i].second<<")=";
cout<<mas[i].Summa()<<endl; }

summa* p_mas=new summa[3]; 
for (int i=0;i<3; i++)
p_mas[i].Read(); 
for (int i=0;i<3; i++)
p_mas[i].Show(); 
for (int i=0;i<3; i++)
{
p_mas[i].Summa(); 
cout<<"p_mas["<<i<<"].Power("<<p_mas[i].first<<","<<p_mas[i].second;
cout<<")="<<p_mas[i].Summa()<<endl;
}

int y; int z;
cout<<"first?";
cin>>y;
cout<<"second?";
cin>>z;

summa F=make_summa(y,z);
F.Show();
return 0;
}