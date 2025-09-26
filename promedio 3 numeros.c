#include<stdio.h>

main(){
	//Victor E. Montero Nuñez
	// Este codigo de ejecuto en c devC
float num1,num2,num3,resultado,suma;
system("color 57");
	printf("Este programa calcula el promedio de 3 numeros\n Ingrese 3 numeros:\n___________________________________________________________\n-->\n");
	scanf("%f%f%f",&num1,&num2,&num3);
	
 suma=num1+num2+num3;
 resultado=suma/3;
 system("cls");
 system("color 37");
	printf("El resultado es: %.2f", resultado);
	getch();
	return 666;
}
