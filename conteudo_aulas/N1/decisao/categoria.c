/*Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias: Categoria	Idade 
Infantil A 	5 a 7 
Infantil B 	8 a 10
Juvenil A 	11 a 13 
Juvenil B 	14 a 17 
Adulto 		maiores de 18 anos 
*/

#include <stdio.h>
main()
{
	int idade;
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
		if (idade>=5 && idade<=7)
			printf("Voce esta na categoria Infantil A.");
			
		if (idade>=8 && idade<=10)
			printf("Voce esta na categoria Infantil B.");
			
		if (idade>=11 && idade<=13)
			printf("Voce esta na categoria Juvenil A.");
			
		if (idade>=14 && idade<=17)
			printf("Voce esta na categoria Juvenil B.");
			
		if (idade>=18)
			printf("Voce esta na categoria Adulto.");
}

