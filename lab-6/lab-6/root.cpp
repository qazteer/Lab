#include <iostream>
#include"root.h"
#include <math.h>
using namespace std;

bool Roott::Init(double F, double S)
{
	if(F != 0){
		first=F; 
		second=S;
		return true;
	}
	return false;
}

void Roott::Read()
{
cout<<"\n first?";
cin>>first;
cout<<"\n second?";
cin>>second;
}

void Roott::Show()
{
cout<<"\n first="<<first;
cout<<"\n second="<<second;
cout<<"\n";
}

double Roott::Root()
{
	Roott r;
    if(r.Init(first,second)){
      return -second / first;
    }else {
      std::cout<<"Invalid arguments "<< __FILE__<<" "<< __LINE__<<std::endl<<"first = "<<first<<" second = "<<second<<std::endl;
      exit(1);
    }
}