// Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui. 

#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"portuguese");
	
	int i, j, nl, nc, cont=0;
	
	printf("Entre com o número de linhas: ");
	scanf("%d", &nl);
	
	printf("Entre com o número de colunas: ");
	scanf("%d", &nc);
	
	int M[nl][nc];
	
	for(i=0; i<nl; i++)
		for(j=0; j<nc; j++)
		{
			printf("M[%d][%d]=", i, j);
			scanf("%d", &M[i][j]);
		}
		
	for(i=0; i<nl; i++)
	{
		for(j=0; j<nc; j++)
		{
			printf("%d ",M[i][j]);
			
			if(M[i][j]>10)
			{
				cont++;
			}
			
		}
			putchar('\n');
	}
	
	printf("O números de valores maiores que 10 é: %d", cont);
}

