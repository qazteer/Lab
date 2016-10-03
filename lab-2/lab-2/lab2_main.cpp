#include <iostream>
#include "money.h"
using namespace std;

Money make_Money(int F, int S)
{
   Money t;
   if(t.Init(F,S)){
      return t;
   } else {
      std::cout<<"Invalid arguments "<< __FILE__<<" "<< __LINE__<<std::endl<<"first = "<<F<<" second = "<<S<<std::endl;
      exit(1);
   }
}


int main()
{
    Money A;
	Money B;
	A.Init(1,2); 
	B.Read(); 

	A.Show(); 
	B.Show(); 
cout<<"A.summa("<<A.first<<","<<A.second<<")="<<A.summa()<<endl;
cout<<"B.summa("<<B.first<<","<<B.second<<")="<<B.summa()<<endl;

Money *X=new Money; 
X->Init(2,5); 
X->Show(); 
X->summa(); 
cout<<"X.summa("<<X->first<<","<<X->second<<")="<<X->summa()<<endl;

Money mas[3]; 
for (int i=0;i<3; i++)
mas[i].Read(); 
for (int i=0;i<3; i++)
mas[i].Show(); 
for (int i=0;i<3; i++) {
mas[i].summa(); 
cout<<"mas["<<i<<"].summa("<<mas[i].first<<","<<mas[i].second<<")=";
cout<<mas[i].summa()<<endl; }

Money* p_mas=new Money[3]; 
for (int i=0;i<3; i++)
p_mas[i].Read(); 
for (int i=0;i<3; i++)
p_mas[i].Show(); 
for (int i=0;i<3; i++)
{
p_mas[i].summa(); 
cout<<"p_mas["<<i<<"].summa("<<p_mas[i].first<<","<<p_mas[i].second;
cout<<")="<<p_mas[i].summa()<<endl;
}

int y; int z;
cout<<"first?";
cin>>y;
cout<<"second?";
cin>>z;

Money F=make_Money(y,z);
F.Show();
return 0;
 
}