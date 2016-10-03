#include <iostream>
#include "function.h"
using namespace std;

Functionn make_Function(double F, double S)
{
  Functionn f;
  f.Init(F,S);
  return f;
}


int main()
{
    Functionn A;
	Functionn B;
	A.Init(1.1,2.2); 
	B.Read(); 

	A.Show(); 
	B.Show(); 
cout<<"A.Function("<<A.first<<","<<A.second<<")="<<A.Function(1.1)<<endl;
cout<<"B.Function("<<B.first<<","<<B.second<<")="<<B.Function(1.2)<<endl;

Functionn *X=new Functionn; 
X->Init(2.2,5.5); 
X->Show(); 
X->Function(1.3); 
cout<<"X.Function("<<X->first<<","<<X->second<<")="<<X->Function(2.2)<<endl;

Functionn mas[3]; 
for (int i=0;i<3; i++)
mas[i].Read(); 
for (int i=0;i<3; i++)
mas[i].Show(); 
for (int i=0;i<3; i++) {
mas[i].Function(3.3); 
cout<<"mas["<<i<<"].Function("<<mas[i].first<<","<<mas[i].second<<")=";
cout<<mas[i].Function(4.4)<<endl; }

Functionn* p_mas=new Functionn[3]; 
for (int i=0;i<3; i++)
p_mas[i].Read(); 
for (int i=0;i<3; i++)
p_mas[i].Show(); 
for (int i=0;i<3; i++)
{
p_mas[i].Function(5.5); 
cout<<"p_mas["<<i<<"].Function("<<p_mas[i].first<<","<<p_mas[i].second;
cout<<")="<<p_mas[i].Function(6.6)<<endl;
}

double y; double z;
cout<<"first?";
cin>>y;
cout<<"second?";
cin>>z;

Functionn F=make_Function(y,z);
F.Show();
return 0;
 
}