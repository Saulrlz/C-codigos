#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int ordena(int a, int b, int c)
{
	int d, *a1, *b1, *c1;
	a1=&a;
	b1=&b;
	c1=&c;
	printf("Los valores que ingreso sin orden son: %d %d %d\n", *a1 , *b1, *c1);
	if(a>b)
	{
		d=b;
		b=a;
		a=d;
	}
	if(b>c)
	{
		d=c;
		c=b;
		b=d;
	}
	if(a>b)
	{
		d=b;
		b=a;
		a=d;
	}
	printf("El orden de menor a mayor es: %d %d %d\n", a, b, c);
}


main()
{
	
	int x, y, z, orden;
	system("color b");
	printf("Programa que ordena de menor a mayo 3 numeros.\n");
	printf("Ingresa el primer valor: ");
	scanf("%d", &x);
	printf("Ingresa el segundo valor: ");
	scanf("%d", &y);
	printf("Ingresa el tercer valor: ");
	scanf("%d", &z);
	orden=ordena(x, y, z);
	return 0;
	
	
}
