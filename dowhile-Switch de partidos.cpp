#include <stdio.h>
#include <stdlib.h>
/*	for(int i=0;i<6;i++){
		printf("%d\n",i);
} */

int main() {
	//Victor E. Montero Nuñez 03/10/2025 D04 
	int  x, num;
	float promedio, suma=0;
	
	printf("Cuantos juegos quiere guardar?: ");
	scanf("%d", &x);
	int a[x];
	
	for(int i=0;i<x;i++){
	printf("Ingrese los goles del juego %d: ", i+1);
	scanf("%d", &a[i]);
	}
	
	
	  //Menu
	  int op;
	  
do{
    printf("\nElije la opcion deseada\n\n");
    printf("1) Ver todos los resultados\n");
    printf("2) Ver el resultado de un partido especifico\n");
    printf("3) Modificar todos los resultados\n");
    printf("4) Modificar un resultado especifico\n");
    printf("5) Ver el promedio de todos los partidos\n");
    printf("0) Salir del programa \n\n");
    scanf("%i", &op);
    printf("\n_______________________________________________________\n\n");
    
    switch (op)
    {
		case 1: 

	    	for(int i=0;i<x;i++){
            printf("El marcador del juego %d es %d \n",i+1, a[i]);
            }
        break;
   
        case 2:
            int i;
            printf("De que partido desea ver el resultado?\n");
            scanf("%d", &i);
            printf("\nLos goles del partido %d son %d\n", i, a[i-1]);
        break;
        
        case 3:
	
	        printf("Cuantos juegos quiere guardar?: ");
	        scanf("%d", &x);
	      
        	for(int i=0;i<x;i++){
        	printf("Ingrese los goles del juego %d: ", i+1);
        	scanf("%d", &a[i]);
        	}
        break;
        
        case 4:
        	printf("A que juego quiere cambiarle el resultado?: ");
	        scanf("%d", &num);
	      
        	printf("Ingrese los goles de ese partido");
        	scanf("%d", &a[num-1]);
        break;
        
        case 5:
        	suma=0;
            
			 for(int i=0; i<x;i++){
   	         suma += a[i];}
       	     promedio=suma/x;
   	
   	        printf("\n\n El promedio es %.2f\n", promedio);
   	    break;
   	    
        case 0: 
        return 666;
        break;
        
		default: printf("La opcion que digito no existe.\n");}
}while(op!=6);

return 0;
}
