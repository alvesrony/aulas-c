/*Dados tr�s valores, A, B, C, verificar se eles podem ser valores dos lados de um tri�ngulo e, se forem, se � um tri�ngulo escaleno, equil�tero ou is�sceles, considerando os seguintes conceitos: 
� O comprimento de cada lado de um tri�ngulo � menor do que a soma dos outros dois lados. 
� Chama-se equil�tero o tri�ngulo que tem tr�s lados iguais.  
� Denominam-se is�sceles o tri�ngulo que tem o comprimento de dois lados iguais.  
� Recebe o nome de escaleno o tri�ngulo que tem os tr�s lados diferentes. */

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


