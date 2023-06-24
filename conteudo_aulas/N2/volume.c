//Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3*PI*R3).

#include <stdio.h>
#include <locale.h>
#include <math.h>

float volume (float r) {
	float vol;
	vol=4*1.0/3*M_PI*r*r*r;
	return vol;
}


main()
{
	float r;
	
	printf("Digite o valor do raio:");
	scanf("%f", &r);
	
	printf("O volume da esfera e: %f",volume(r));
}

