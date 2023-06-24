// Solicitar salário e valor da prestação. Se prestação for maior que 20% do salário, imprimir: “Empréstimo não pode ser concedido”. Senão imprimir: “Empréstimo pode ser concedido”.


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
	
	printf("20%% do seu salário = %.2f\n",perc_salario);
	printf("Prestação = %.2f\n",prestacao);
	
	if (prestacao>perc_salario)
	{
	  printf("A prestação é maior do que 20%% do seu salário!\n");
	  printf("Emprestimo nao pode ser concedido\n");
    }
	else
	  printf("Emprestimo pode ser concedido\n");  
}

