#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main(void){
		
		Circulo* c = circ_cria (4.1, 2.7, 3.2);
		Ponto* p = pto_cria (2.0,3.4);
		float a = circ_area (c);		
		printf("\ndigite a area do circulo:%.2f\n", a);
		int d = circ_interior(c, p);
		printf("\ndigite o interior do circulo:%.2d\n", c);
		pto_libera(p);
		circ_libera(c);
		return 0;
}
