// Fazer um programa em C que leia 3 n�meros inteiros, calcule e mostre o resultado da soma e da m�dia aritm�tica desses 3 n�meros.

#include <stdio.h>
main()
{
	int n1,n2,n3,soma;
	float media;
	printf("Entre com 3 valores inteiros para os numeros:");
	scanf("%d %d %d",&n1,&n2,&n3);
	soma = n1+n2+n3;
	media = soma*1.0/3;
	printf("Soma=%d\n",soma);
	printf("Media=%.2f\n",media);
}

