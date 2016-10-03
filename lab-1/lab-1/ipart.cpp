#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "ipart.h"

using namespace std;
//реализация метода для инициализации полей структуры
void ipart::Init(unsigned int F, unsigned int S)
{
	first = F; second = S;
}
//реализация метода для чтения значений полей структуры
void ipart::Read()
{
	cout << "\n(first) числитель (положительное целое число) = "; 
	cin >> first;
	cout << "\n(second) знаменатель (положительное целое число) = "; cin >> second;
}
//реализация метода для вывода значений полей структуры
void ipart::Show()
{
	cout << "\nn(first) числитель = " << first;
	cout << "\n(second) знаменатель = " << second;
	cout << "\n";
}
//метод для возведения в степень
unsigned int ipart::Div()
{
	if (second == 0) {
		return NULL;
	}
	 unsigned int d;
	 d = first / second;
	 return d;
}