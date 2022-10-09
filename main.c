#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main(void){
		
		Circulo* c = circ_cria (4.1, 2.7, 3.2);
		Ponto* p = pto_cria (2.0,3.4);
		float a = distancia (c, p);		

	printf("\ndistancia entre os pontos:%.1f\n", a);

		libera(q);
		libera(c);

		Ponto* p = pto_cria (2.0,3.4);

		Circulo* c = circ_cria (4.1, 2.7, 3.2);
		float s = circ_area (c);

	printf("\ndigite a area do circulo:%.2d\n", s);
		cir_interior(p, c);

	printf("\nponto nao esta no circulo\n");
	
		circ_libera(c);
		return 0;

}
