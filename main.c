#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int personas,mujeres, hombres,porcentajedehombres,porcentajedemujeres,continuar;
	system("color 0F");
	system("cls");
	fflush(stdin);
	printf("\t\t\tPorcentaje de Hombres y Mujeres en un Salon de Clase\t\t\t");
	do{
	
    
	printf("\n\n\tPersonas en el salon de clase: ");
	scanf("%d",&personas);
	printf("\n\tMujeres en el salon de clase: ");
	scanf("%d",&mujeres);
	printf("\n\tHombres en el salon de clase: ");
	scanf("%d",&hombres);
	porcentajedehombres=hombres*100/personas;
	printf("\n\t Un %d%c de Hombres en el salon de clase",porcentajedehombres,37);
	porcentajedemujeres=mujeres*100/personas;
	printf("\n\t Un %d%c de Mujeres en el salon de clase",porcentajedemujeres,37);
	printf("\n\n\n\t\t\tPresiona (0) para volver a iniciar: ");
	scanf("%d",&continuar);
	system("cls");
	printf("\t\t\tPorcentaje de Hombres y Mujeres en un Salon de Clase\t\t\t");
	}
	while (continuar==0);
	printf("\t\t\t\n\nHasta pronto\t\t\t");
	return 0;
}
