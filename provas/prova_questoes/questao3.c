/* Faça um programa que calcule e escreva a seguinte soma: (3 pontos)
Soma= 1/1 + 3/2 + 5/3 + 7/4 + … + 99/50 */

#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	int d=1, div=1;
	float soma=0;
		
	printf("A soma é:\n");
	printf("%d/%d", d, div);
	d+=2;
	div++;
	while(div<=50)
	{
		soma+=(d*1.0/div);
		printf(" + %d/%d", d, div);
		d+=2;
		div++;
	}
	
	printf("\n\nO valor da soma é: %f", soma);
	
}

