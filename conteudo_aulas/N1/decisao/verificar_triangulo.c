/*Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo e, se forem, se é um triângulo escaleno, equilátero ou isósceles, considerando os seguintes conceitos: 
• O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados. 
• Chama-se equilátero o triângulo que tem três lados iguais.  
• Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.  
• Recebe o nome de escaleno o triângulo que tem os três lados diferentes. */

#include <stdio.h>
main()
{
	int a, b, c;
	
	printf("Digite tres valores para lados de um triangulo: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a<b+c && b<a+c && c<a+b)
		{	
		if(a==b && b==c)
			printf("O triangulo e equilatero.");
		if(a==b && a!=c || a==c && a!=b || b==c && b!=a)
			printf("O triangulo e isosceles.");
		if(a!=b && a!=c && b!=c)
			printf("O triangulo e escaleno.");
		}
	else
		printf("Os numeros nao sao lados de um triangulo.");
}


