// Receber um valor qualquer do teclado e imprimir esse valor com reajuste de 10%.

#include <stdio.h>
main()
{
	int num;
	float num_reajuste;
	printf("Entre com o valor para numero:");
	scanf("%d",&num);
	num_reajuste = num + num * 10 / 100.0;
	printf("Valor com reajuste de 10%% = %f\n",num_reajuste);
}

