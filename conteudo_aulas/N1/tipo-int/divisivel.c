//Receber um número do teclado e informar se ele é divisível por 10, por 5, por 2 ou se não é divisível por nenhum destes. 

#include <stdio.h>
main()
	{
		
		int n1;
		
		printf("Digite o numero: \n");
		scanf("%d", &n1);
		
		if (n1%10==0)
			printf("Numero e divisivel por 10.\n");
			
		if (n1%5==0) 
			printf("Numero e divisivel por 5.\n");
			
		if (n1%2==0)
			printf("Numero e divisivel por 2.\n");
			
		else
				if (n1%5!=0)
				if (n1%2!=0)
				if (n1%10!=0)
					printf("O numero nao e divisivel por 10, por 5 ou por 2.");
	}

