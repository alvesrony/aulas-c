// Escrever uma fun��o (bem como um programa que exercite tal fun��o) que tem como par�metros tr�s valores inteiros a, b e c e retorna a posi��o do maior e a posi��o do menor valor. Exemplo: Se a = 7, b = 1 e c = 5, o procedimento deve retornar 2 como a posi��o do menor e 1 como a posi��o do maior.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void maior_menor (int a,int b,int c)
{
	int i, menor, maior;
	if (a<b && a<c)
	{
		menor=1;
	}
	else if (b<a && b<c)
	{
		menor=2;
	}
	else if (c<a && c<b)
	{
		menor=3;
	}
	
	if (a>b && a>c)
	{
		maior=1;
	}
	else if (b>a && b>c)
	{
		maior=2;
	}
	else if (c>a && c>b)
	{
		maior=3;
	}
	printf("Maior = %d\n", maior);
	printf("Menor = %d\n", menor);
}
main()
{
	
	setlocale(LC_ALL,"portuguese");
	
	int a, b, c;
	
	printf("Digite tr�s valores:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	maior_menor(a,b,c);
}

