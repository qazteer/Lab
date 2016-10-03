#include <iostream>
#include "ipart.h"
using namespace std;
ipart make_fraction(unsigned int F, unsigned int S)
{
	ipart t;//создали временную переменную
	t.Init(F, S);//инициализировали пол€ переменной t с помощью параметров функции

	return t;//вернули значение переменной t
}
int main()
{
	setlocale(LC_ALL, "Russian");
	//определение переменных ј и ¬
	ipart A;
	ipart B;
	A.Init(22, 7);//инициализаци€ переменной ј
	B.Read();//ввод полей переменных ¬
	A.Show();//вывод значений полей переменной ј
	system("pause");
	B.Show();//вывод значений полей переменной ¬
			 //вывод  выделенного значени€ целой части с помощью функции Div()
	cout << "A.Div=" << A.first << "/" << A.second << "=" << A.Div() << endl;
	cout << "B.Div=" << B.first << "/" << B.second << "=" << B.Div() << endl;
	//указатели
	ipart *X = new ipart;//выделение пам€ти под динамическую переменную
	X->Init(2.0, 5);//инициализаци€
	X->Show();//вывод значений полей
	unsigned x = X->Div();//÷елочисленное деление 
	 
	cout << "X.Div(" << X->first << "," << X->second << ")=" << x << endl;
	//массивы
	ipart mas[3];//определение массива
	int i;
	for (i = 0; i<3; i++)
		mas[i].Read();//чтение значений полей
	for (i = 0; i<3; i++)
		mas[i].Show(); //вывод значений полей
	for (i = 0; i<3; i++)
	{
		mas[i].Div(); //вычисление степени
		cout << "mas[" << i << "].Div " << mas[i].first << "/" << mas[i].second << " = ";
		cout << mas[i].Div() << endl;
	}
	//динамические масивы
	ipart* p_mas = new ipart[3];//выделение пам€ти
	for (int i = 0; i<3; i++)
		p_mas[i].Read();//чтение значений полей
	for (i = 0; i<3; i++)
		p_mas[i].Show();//вывод значений полей
	for (i = 0; i<3; i++)
	{
		p_mas[i].Div();//вычисление степени
		cout << "p_mas[" << i << "].Div =" << p_mas[i].first << "/" << p_mas[i].second;
		cout << " = " << p_mas[i].Div() << endl;
	}
	//вызов функции make_fraction()
	double y; int z;
	cout << "\n(first) числитель (положительное целое число) = "; cin >> y;
	cout << "\n(second) знаменатель (положительное целое число) = "; cin >> z;
	//переменна€ F формируетс€ с помощью функции make_fraction()
	ipart F = make_fraction(y, z);
	F.Show();
	system("pause");
	return 0;
}