#define _CRT_SECURE_NO_WARNINGS //���������� �� ������
#include<stdio.h>

void main() {
	int a = 5;
	//double b = 10.7;
	int b = 6;
	int res;
	//res = a;
	//res = (int)b;
	printf("res = %d", res);
	res = a + b; //����� ������� ���������� ��������(������ ������)
	res = a - b - 5 + a;
	res = a / b; //5/6=0 
	res = a % b; //1 �������, � double ����� ����� ���� ������ ���� ���������� � double %lf
	res = -a; //-1*a
	res = +a; //��� �������� ����� ������ �� ����������, char ��������
	res = +'a';
	res = ++a; //���������� ���������� 1, ������������ ���
	res = a++; //����������� ������� ���������, ����� ������� a+1, � �������� ��� ��
	printf("a = %lf\n", a);
	printf("res = %lf", res);
	
	//���������� ���������
	int a = 0;
	int b = 0;
	int res = 0;
	res = a;
	printf("a = %d\t//���������", a); // \t - ���� ���������
	printf("b = %d\t//���������", b);
	printf("res = %d\t//���������", res+a) //������� ��������� ����� �����;
	res = a == b != c < a !(a < b) //�� ������ 
		&& //� 
		|| //���

	printf("size b = %d", sizeof(b)); //������ ������ ����������
}