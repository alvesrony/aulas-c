// Ler um número. Se positivo, imprimir raiz quadrada senão o quadrado.

#include <stdio.h>
#include <math.h>
main()
{
	int num;
	
	printf("Entre com um numero inteiro:");
	scanf("%d",&num);
	
	if (num>0)
	  printf("A raiz quadrada de %d = %.2f\n",num,sqrt(num));
	else
	  printf("O quadrado de %d = %d\n",num,num*num);  
}

