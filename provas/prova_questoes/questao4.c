/* Na sequência de frações a seguir, o numerador de cada fração é a soma do numerador e do denominador da fração anterior, e o denominador de cada fração é a soma dos denominadores das duas frações anteriores.
Dado o valor de N, N = 2, calcular a soma dos N primeiros termos da sequência. (3 pontos)
2/1, 3/2, 5/3, 8/5, 13/8, 21/13 */

#include <stdio.h>
main()
{   
	int i, N, num_atual, den_atual, num_ant, den1, den2;
	
	float soma=0;
	
	printf("Entre com o valor de N: ");
	scanf("%d",&N);
	
	num_ant=2;
	den1=den2=1;
	
	printf("%d/%d + ",num_ant,den1);
	
	soma += num_ant*1.0/den1;
	
	for(i=2;i<=N;i++)
	{
       num_atual = num_ant + den1;
	   den_atual = den1 + den2;
	   soma += num_atual*1.0/den_atual; 
	    
	   printf("%d/%d + ",num_atual,den_atual);
	   
	   num_ant = num_atual;
	   den2 = den1;
	   den1 = den_atual;  		
	}
	printf("\nSoma = %f\n ",soma);
}


