// Em Matemática, o número harmônico designado por H(n) define-se como sendo a soma da série harmônica: H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n. Faça um programa que leia um valor n inteiro e positivo e apresente o valor de H(n). 

#include <stdio.h>
main()
{
	float num, soma_h=1, i=1;
	
	printf("Digite um numero a ser calculado a soma harmonica: ");
	scanf("%f",&num);

	while(i<=num)
	{
		soma_h+=1*1.0/i;
		i++;
	}
	printf("A soma harmonica de %.2f e: %.2f", num, soma_h);
}


