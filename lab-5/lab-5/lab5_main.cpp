#include <iostream>
#include "minutes.h"
using namespace std;
minutes make_minutes(int F, int S)
{
minutes t; 
t.Init(F,S); 
return t; 
}


int main()
{ 
minutes A;
minutes B;
A.Init(3,2); 
B.Read(); 
A.Show(); 
B.Show(); 
cout<<"A.Minutes("<<A.first<<","<<A.second<<")="<<A.Minutes()<<endl;
cout<<"B.Minutes("<<B.first<<","<<B.second<<")="<<B.Minutes()<<endl;

minutes *X=new minutes; 
X->Init(2,5); 
X->Show(); 
X->Minutes(); 
cout<<"X.Minutes("<<X->first<<","<<X->second<<")="<<X->Minutes()<<endl;

minutes mas[3]; 
for (int i=0;i<3; i++)
mas[i].Read(); 
for (int i=0;i<3; i++)
mas[i].Show(); 
for (int i=0;i<3; i++) {
mas[i].Minutes(); 
cout<<"mas["<<i<<"].Minutes("<<mas[i].first<<","<<mas[i].second<<")=";
cout<<mas[i].Minutes()<<endl; }

minutes* p_mas=new minutes[3]; 
for (int i=0;i<3; i++)
p_mas[i].Read(); 
for (int i=0;i<3; i++)
p_mas[i].Show(); 
for (int i=0;i<3; i++)
{
p_mas[i].Minutes(); 
cout<<"p_mas["<<i<<"].Minutes("<<p_mas[i].first<<","<<p_mas[i].second;
cout<<")="<<p_mas[i].Minutes()<<endl;
}

int y; int z;
cout<<"first?";
cin>>y;
cout<<"second?";
cin>>z;

minutes F=make_minutes(y,z);
F.Show();
return 0;
}