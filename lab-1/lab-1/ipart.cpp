#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "ipart.h"

using namespace std;
//���������� ������ ��� ������������� ����� ���������
void ipart::Init(unsigned int F, unsigned int S)
{
	first = F; second = S;
}
//���������� ������ ��� ������ �������� ����� ���������
void ipart::Read()
{
	cout << "\n(first) ��������� (������������� ����� �����) = "; 
	cin >> first;
	cout << "\n(second) ����������� (������������� ����� �����) = "; cin >> second;
}
//���������� ������ ��� ������ �������� ����� ���������
void ipart::Show()
{
	cout << "\nn(first) ��������� = " << first;
	cout << "\n(second) ����������� = " << second;
	cout << "\n";
}
//����� ��� ���������� � �������
unsigned int ipart::Div()
{
	if (second == 0) {
		return NULL;
	}
	 unsigned int d;
	 d = first / second;
	 return d;
}