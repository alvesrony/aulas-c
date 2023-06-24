// Ler 2 números inteiros e somá-los. Se a soma for maior que 10, mostrar o resultado da soma.

#include <stdio.h>
main()
{
	int n1,n2,soma;
	
	printf("Entre com dois numeros inteiros:");
	scanf("%d %d",&n1,&n2);
	
	soma = n1 + n2;
	
	if (soma>10)
	  printf("O resultado da soma = %d\n",soma);
}

