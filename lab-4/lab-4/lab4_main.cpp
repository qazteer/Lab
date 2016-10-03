#include <iostream>
using namespace std;
 
class Field {
      private:
              int first;
              int second;
      public:
             bool init(int, int);
             bool RangeCheck(int);
             void Read();
             void Display();
};
 
bool Field::init(int f, int s)
{
    if(f < s) //������������� �� f ����� ������� ?
    {
        first = f;
        second = s;
        return true;
    }
    cout << "�������� ������ \n";
    return false;
}
 
void Field::Read() 
{
    int f, s;
    cout << "������� �������: " << endl;
    do 
    {
        cin >> f >> s;
    }
    while(!(init(f, s)));
}
 
bool Field::RangeCheck(int a) 
{
     if(a >= first && a < second)
         return true;
     return false;
}
 
void Field::Display() 
{
    cout << "[" << first << ";" << second << ")\n"; 
}    
 
int main() 
{
    setlocale(0, "Rus");
    Field range;
    range.Read();
    range.Display();
    int a; cout << "������� �����: "; cin >> a;
    if(range.RangeCheck(a))
    {
        cout << "����� " << a << " ����������� ��������� "; 
        range.Display();
    }
    else 
    {
            cout << "����� " << a << " �� ����������� ���������"; 
            range.Display();
    }
    return 0;
}