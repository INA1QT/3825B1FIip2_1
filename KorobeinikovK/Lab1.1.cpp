#include <cstdio>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "rus");
	float h, w, d, m;
	float dsp = 750, dvp = 400, wood = 690;
	float dsp_t = 1.5, dvp_t = 0.5, wood_t = 1;
	float pol_c = 0, r_pol = 40;
	dvp = dvp / 1000000;//������ ����� � ��/��^3
	dsp = dsp / 1000000;//������� ��������� � ��/��^3
	wood = wood / 1000000;//������� ��������� ���� � ��/��^3
	printf("������� ������ ������ ������ (�� 180 �� 220 ��):");
	scanf_s("%f", &h);
	printf("������� ������ ������ ������ (�� 80 �� 120 ��):");
	scanf_s("%f", &w);
	printf("������� ������� ����� (�� 50 �� 90 ��):");
	scanf_s("%f", &d);
	if ((h < 180) || (h > 220)) {
		printf("����������� ������� ������ ����� ");
	}
	else if ((w < 80) || (w > 120)) {
		printf("����������� ������� ������ ����� ");
	}
	else if ((d < 50) || (d > 90)) {
		printf("����������� ������� ������� ����� ");
	}
	else {
		while ((r_pol + 1.5) <= h)
		{
			pol_c = pol_c + 1;
			r_pol = r_pol + 41.5;
		}
		m = (h * w * dvp_t * dvp) + (2 * h * d * dsp * dsp_t) + (2 * h * w * wood * wood_t) + (2 * d * w * dsp * dsp_t) + (pol_c * w * d * dsp * dsp_t);
		printf("Macc� �����: %.3f ��", m);
	}
}