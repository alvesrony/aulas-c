// Faça um programa que receba dois números e mostre qual deles é o maior. Se forem iguais mostre uma mensagem “Números iguais”.

#include <stdio.h>
main()
{
	int n1, n2;
	printf("Digite dois numeros:");
	scanf("%d %d",&n1,&n2);
	
	if (n1>n2)
	printf("O primeiro numero e maior que o segundo.");
	if (n1<n2)
	printf("O segundo numero e maior que o primeiro.");
	if(n1==n2)
	printf("Numeros iguais.");
}

