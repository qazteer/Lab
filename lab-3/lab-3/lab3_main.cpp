#include <iostream>
#include "cost.h"
using namespace std;
cost make_cost(int F, int S)
{
cost t; 
t.Init(F,S); 
return t; 
}


int main()
{ 
cost A;
cost B;
A.Init(3.0,2); 
B.Read(); 
A.Show(); 
B.Show(); 
cout<<"A.Cost("<<A.first<<","<<A.second<<")="<<A.Cost()<<endl;
cout<<"B.Cost("<<B.first<<","<<B.second<<")="<<B.Cost()<<endl;

cost *X=new cost; 
X->Init(2.0,5); 
X->Show(); 
X->Cost(); 
cout<<"X.Cost("<<X->first<<","<<X->second<<")="<<X->Cost()<<endl;

cost mas[3]; 
for (int i=0;i<3; i++)
mas[i].Read(); 
for (int i=0;i<3; i++)
mas[i].Show(); 
for (int i=0;i<3; i++) {
mas[i].Cost(); 
cout<<"mas["<<i<<"].Cost("<<mas[i].first<<","<<mas[i].second<<")=";
cout<<mas[i].Cost()<<endl; }

cost* p_mas=new cost[3]; 
for (int i=0;i<3; i++)
p_mas[i].Read(); 
for (int i=0;i<3; i++)
p_mas[i].Show(); 
for (int i=0;i<3; i++)
{
p_mas[i].Cost(); 
cout<<"p_mas["<<i<<"].Cost("<<p_mas[i].first<<","<<p_mas[i].second;
cout<<")="<<p_mas[i].Cost()<<endl;
}

int y; int z;
cout<<"first?";
cin>>y;
cout<<"second?";
cin>>z;

cost F=make_cost(y,z);
F.Show();
return 0;
}