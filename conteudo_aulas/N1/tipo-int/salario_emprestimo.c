// Solicitar sal�rio e valor da presta��o. Se presta��o for maior que 20% do sal�rio, imprimir: �Empr�stimo n�o pode ser concedido�. Sen�o imprimir: �Empr�stimo pode ser concedido�.


#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	float salario, prestacao, perc_salario;
	
	printf("Entre com o seu salario:");
	scanf("%f",&salario);
	
	printf("Entre com o valor da prestacao:");
	scanf("%f",&prestacao);
	
	perc_salario = 20 * salario / 100;
	
	printf("20%% do seu sal�rio = %.2f\n",perc_salario);
	printf("Presta��o = %.2f\n",prestacao);
	
	if (prestacao>perc_salario)
	{
	  printf("A presta��o � maior do que 20%% do seu sal�rio!\n");
	  printf("Emprestimo nao pode ser concedido\n");
    }
	else
	  printf("Emprestimo pode ser concedido\n");  
}

