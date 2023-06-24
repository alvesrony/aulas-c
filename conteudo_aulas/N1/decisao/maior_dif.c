// Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim como a diferença existente entre ambos. 

#include <stdio.h>
main()
{
	int n1, n2, diferenca;
	
	printf("Digite dois numeros inteiros:");
	scanf("%d %d",&n1,&n2);
	
	diferenca=n1/n2;
	
	if (n1>n2)
	printf("O primeiro numero e maior que o segundo.\n");
	if (n2>n1)
	printf("O segundo numero e maior que o primeiro.\n");
	
	printf("A diferenca entre ambos e: %d / %d = %d",n1,n2,diferenca);
}

