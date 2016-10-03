#include <iostream>
#include "root.h"
using namespace std;

Roott make_Root(double F, double S)
{
   Roott r;
    if(r.Init(F,S)){
      return r;
    }else {
      std::cout<<"Invalid arguments "<< __FILE__<<" "<< __LINE__<<std::endl<<"first = "<<F<<" second = "<<S<<std::endl;
      exit(1);
    }
}


int main()
{
    Roott A;
	Roott B;
	A.Init(1.1,2.2); 
	B.Read(); 

	A.Show(); 
	B.Show(); 
cout<<"A.Root("<<A.first<<","<<A.second<<")="<<A.Root()<<endl;
cout<<"B.Root("<<B.first<<","<<B.second<<")="<<B.Root()<<endl;

Roott *X=new Roott; 
X->Init(2.2,5.5); 
X->Show(); 
X->Root(); 
cout<<"X.Root("<<X->first<<","<<X->second<<")="<<X->Root()<<endl;

Roott mas[3]; 
for (int i=0;i<3; i++)
mas[i].Read(); 
for (int i=0;i<3; i++)
mas[i].Show(); 
for (int i=0;i<3; i++) {
mas[i].Root(); 
cout<<"mas["<<i<<"].Root("<<mas[i].first<<","<<mas[i].second<<")=";
cout<<mas[i].Root()<<endl; }

Roott* p_mas=new Roott[3]; 
for (int i=0;i<3; i++)
p_mas[i].Read(); 
for (int i=0;i<3; i++)
p_mas[i].Show(); 
for (int i=0;i<3; i++)
{
p_mas[i].Root(); 
cout<<"p_mas["<<i<<"].Root("<<p_mas[i].first<<","<<p_mas[i].second;
cout<<")="<<p_mas[i].Root()<<endl;
}

double y; double z;
cout<<"first?";
cin>>y;
cout<<"second?";
cin>>z;

Roott F=make_Root(y,z);
F.Show();
return 0;
 
}