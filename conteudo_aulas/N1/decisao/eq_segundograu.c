/* Calcule as ra�zes de uma equa��o do 2� grau. Lembrando que: 
x=-b�?2a 
onde ?=b2-4ac
e ax2+bx+c=0 representa uma equa��o de 2� grau. 
A vari�vel a tem que ser diferente de zero. Caso seja igual, imprima a mensagem �N�o � equa��o de segundo grau�. 
� Se ? < 0, n�o existem ra�zes reais (s�o complexas). Imprima a mensagem �N�o existe raiz�. 
� Se ? = 0, existe uma raiz real. Imprima a raiz e a mensagem �Raiz �nica�. 
� Se ? > 0, imprima as duas ra�zes reais. 
*/

#include <stdio.h>
#include <math.h>
main()
{
	float a, b, c, x, x1, x2, delta, raiz_delta;
	printf("Digite valores A, B, e C de uma equacao de segundo grau:");
	scanf("%f %f %f",&a,&b,&c);
	
			
				
	if (a!=0)
	{
			delta=(b*b)+(-4*a*c);
			
			if (delta==0)
			{
				x=(-b)/(2*a);
				printf("A raiz e: %.2f raiz unica.",x);
			}
			
			else
				if (delta<0)
				printf("Nao existe raiz.");
				
				else
					if (delta>0)
					{
					raiz_delta=sqrt(delta);
					x1=(-b+raiz_delta)/(2*a);
					x2=(-b-raiz_delta)/(2*a);
					printf("Raiz x1 = %.2f\n",x1);
					printf("Raiz x2 = %.2f\n",x2);
					}
	}
	else
		printf("Nao e uma equacao de segundo grau.");
}

