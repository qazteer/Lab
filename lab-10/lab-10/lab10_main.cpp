#include <iostream>
#include "hipotenuse.h"
using namespace std;
hipotenuse make_hipotenuse(double F, double S)
{
hipotenuse t; 
t.Init(F,S); 
return t; 
}


int main()
{ 
hipotenuse A;
hipotenuse B;
A.Init(3.0,2.4); 
B.Read(); 
A.Show(); 
B.Show(); 
cout<<"A.hipotenuse("<<A.first<<","<<A.second<<")="<<A.Hipotenuse()<<endl;
cout<<"B.hipotenuse("<<B.first<<","<<B.second<<")="<<B.Hipotenuse()<<endl;

hipotenuse *X=new hipotenuse; 
X->Init(2.0,5.5); 
X->Show(); 
X->Hipotenuse(); 
cout<<"X.hipotenuse("<<X->first<<","<<X->second<<")="<<X->Hipotenuse()<<endl;

hipotenuse mas[3]; 
for (int i=0;i<3; i++)
mas[i].Read(); 
for (int i=0;i<3; i++)
mas[i].Show(); 
for (int i=0;i<3; i++) {
mas[i].Hipotenuse(); 
cout<<"mas["<<i<<"].distance("<<mas[i].first<<","<<mas[i].second<<")=";
cout<<mas[i].Hipotenuse()<<endl; }

hipotenuse* p_mas=new hipotenuse[3]; 
for (int i=0;i<3; i++)
p_mas[i].Read(); 
for (int i=0;i<3; i++)
p_mas[i].Show(); 
for (int i=0;i<3; i++)
{
p_mas[i].Hipotenuse(); 
cout<<"p_mas["<<i<<"].distance("<<p_mas[i].first<<","<<p_mas[i].second;
cout<<")="<<p_mas[i].Hipotenuse()<<endl;
}

int y; int z;
cout<<"first?";
cin>>y;
cout<<"second?";
cin>>z;

hipotenuse F=make_hipotenuse(y,z);
F.Show();
return 0;
}