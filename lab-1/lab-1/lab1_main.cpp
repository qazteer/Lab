#include <iostream>
#include "ipart.h"
using namespace std;
ipart make_fraction(unsigned int F, unsigned int S)
{
	ipart t;//������� ��������� ����������
	t.Init(F, S);//���������������� ���� ���������� t � ������� ���������� �������

	return t;//������� �������� ���������� t
}
int main()
{
	setlocale(LC_ALL, "Russian");
	//����������� ���������� � � �
	ipart A;
	ipart B;
	A.Init(22, 7);//������������� ���������� �
	B.Read();//���� ����� ���������� �
	A.Show();//����� �������� ����� ���������� �
	system("pause");
	B.Show();//����� �������� ����� ���������� �
			 //�����  ����������� �������� ����� ����� � ������� ������� Div()
	cout << "A.Div=" << A.first << "/" << A.second << "=" << A.Div() << endl;
	cout << "B.Div=" << B.first << "/" << B.second << "=" << B.Div() << endl;
	//���������
	ipart *X = new ipart;//��������� ������ ��� ������������ ����������
	X->Init(2.0, 5);//�������������
	X->Show();//����� �������� �����
	unsigned x = X->Div();//������������� ������� 
	 
	cout << "X.Div(" << X->first << "," << X->second << ")=" << x << endl;
	//�������
	ipart mas[3];//����������� �������
	int i;
	for (i = 0; i<3; i++)
		mas[i].Read();//������ �������� �����
	for (i = 0; i<3; i++)
		mas[i].Show(); //����� �������� �����
	for (i = 0; i<3; i++)
	{
		mas[i].Div(); //���������� �������
		cout << "mas[" << i << "].Div " << mas[i].first << "/" << mas[i].second << " = ";
		cout << mas[i].Div() << endl;
	}
	//������������ ������
	ipart* p_mas = new ipart[3];//��������� ������
	for (int i = 0; i<3; i++)
		p_mas[i].Read();//������ �������� �����
	for (i = 0; i<3; i++)
		p_mas[i].Show();//����� �������� �����
	for (i = 0; i<3; i++)
	{
		p_mas[i].Div();//���������� �������
		cout << "p_mas[" << i << "].Div =" << p_mas[i].first << "/" << p_mas[i].second;
		cout << " = " << p_mas[i].Div() << endl;
	}
	//����� ������� make_fraction()
	double y; int z;
	cout << "\n(first) ��������� (������������� ����� �����) = "; cin >> y;
	cout << "\n(second) ����������� (������������� ����� �����) = "; cin >> z;
	//���������� F ����������� � ������� ������� make_fraction()
	ipart F = make_fraction(y, z);
	F.Show();
	system("pause");
	return 0;
}