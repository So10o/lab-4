#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>


void main()
{

	char c = '!', c1;

	int i = 2, i1, sym;

	float f = 3.14f, f1;

	double d = 5e-12, d1;

	setlocale(LC_ALL, "RUS");

	printf("%c\n%d\n%f\n%g\n", c, i, f, d);


	puts("������� ����������");
	
	scanf("%c%d%f%le", &c1, &i1, &f1, &d1);

	printf("%c\n%d\n%.3f\n%.le\n\n", c1, i1, f1, d1);

	printf("����� ����� = %d, ������� ����� = %f\n\n", (int)f1, f1 - (int)f1);

	puts("������� ������");
	
	scanf("%c", &sym);

	sym = getchar();

	printf("c=%d\n\n", sym);

	printf("%f\n", 1 / (float)c1);
}