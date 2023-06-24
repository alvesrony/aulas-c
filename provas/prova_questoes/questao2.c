/* Faça um programa que leia um número inteiro qualquer e some os algarismos deste número. (2 pontos)
Por exemplo: número = 53491
Soma = 1+9+4+3+5 = 22 */

#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	int num, resto, soma=0;
	
	printf("Entre com um número: ");
	scanf("%d", &num);
	
	printf("A soma dos algarismos deste número é:\n");
	
	while(num)
	{
		resto=num%10;
		printf("%d + ",resto);
		soma+=resto;
		num/=10;
	}
	
	printf("= %d", soma);
	
}


