#include <iostream>
#include"money.h"
#include <algorithm>
using namespace std;

bool Money::Init(int F, int S)
{
   int val[]={1, 2, 5, 10, 50, 100, 500};
   size_t size = sizeof(val)/sizeof(*val);
   if(std::find(val, val+size, F) != val+size && S!=0){
      first = F;
      second = S;
      return true;
   }
   return false;
}

void Money::Read()
{
cout<<"\n first?";
cin>>first;
cout<<"\n second?";
cin>>second;
}

void Money::Show()
{
cout<<"\n first="<<first;
cout<<"\n second="<<second;
cout<<"\n";
}

int Money::summa()
{
	Money t;
   if(t.Init(first,second)){
      return first * second;
   } else {
      std::cout<<"Invalid arguments "<< __FILE__<<" "<< __LINE__<<std::endl<<"first = "<<first<<" second = "<<second<<std::endl;
      exit(1);
   }
   
}



