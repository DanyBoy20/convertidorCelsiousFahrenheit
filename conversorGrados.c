#include <stdio.h>
#include <stdlib.h>
int numero; // variable (tipo entero) que guarda la opcion que elige el usuario
float c,f; // variables (tipo float) contenedoras del valor ingresado por el usuario
main() {			
	printf(":::::: CONVERTIDOR DE GRADOS: CELSIOUS Y FAHRENHEIT ::::::\n\n"); // titulo en pantalla		
	printf(" Centigrados a Fahrenheit (1) / Fahrenheit a Celsious (2): "); // mensaje pidiendo elegir una opcion
	scanf("%d", &numero); // guarda opcion en numero
		switch(numero ){ //estructura selectiva switch - evaluo la opcion que se eligio
			case 1: // si se eligio 1
			printf("\n\n Ingresa la temperatura a convertir: "); // mensaje pidiendo valor a convertir
            scanf("%f",&c); // guardo valor en variable c                            
            f=1.8*c+32; // formula para realizar la conversion y asignarla a variable f
            printf("\n\t%.2f Centigrados = %.2f Fahrenheit\n\n",c,f); // mensaje mostrando el resultado
			break; // escape o fin de estructura selectiva
			case 2: //si eligio 2
			printf("\n\nIngresa la temperatura a convertir:"); // mensaje pidiendo valor a convertir
            scanf("%f",&f); // guardo valor en f
            c=(f-32)/1.8; // formula para realizar la conversion y asignarla a variable c        
            printf("\n\t%.2f Fahrenheit = %.2f Centigrados\n\n",f,c); // mensaje mostrando resultado
			break; //escape o fin de estructura selectiva
			default: printf("\n Tu seleccion fue incorrecta "); //en caso de que no eligio ninguna de las opciones (1 o 2), muestra mensaje
		}				
	system("pause"); //pausa
}
