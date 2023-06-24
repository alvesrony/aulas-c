// Faça um programa para ler 5 valores inteiros e, em seguida, mostre todos os valores lidos juntamente com o maior, o menor e a média desses valores.

#include <stdio.h>
#define N 5
main()
{
	int num, i=1, maior, menor, soma=0, quant_num=0;
	float media;
	
	while(i<=N)
	{	
		printf("Digite um numero inteiro: ");
		scanf("%d",&num);
		
		if(i==1)
		{
			maior=num;
			menor=num;	
		}
		if(menor>=num)
			menor=num;
		if(num>=maior)
			maior=num;
			
		soma+=num; 
		quant_num++;
		i++;
	}
	media=soma*1.0/quant_num;
	printf("A soma dos numeros digitados e: %d\n", soma);
	printf("A quantidade de numeros digitados foi: %d\n", quant_num);
	printf("O menor numero e: %d\n", menor);
	printf("O maior numero e: %d\n", maior);
	printf("A media dos numeros digitados e: %.2f\n", media);
}

