#include <stdio.h>
#include <stdlib.h>
int main(){
int x,op;
int edad;
int i, j;

for (int i=1; i<=3; i++)
{
	for (int j=1; j<=2; j++)  
    {
        printf("j=%d, j=%d\n", i, j);
    }
}

/* switch con if anidado

printf("opcion 1: Positivo|Negativo\nopcion 2: Par|Impar\n\n");
	printf("Escriba un numero: ");
	scanf("%d", &x);
	printf("Escriba la opcion : ");
	scanf("%d", &op);
	system("cls");


switch(op)
	{
		case 1:
			if(x>0)
			  printf("positivo");
			else
			  printf("No positivo");
		break;
		case 2: //otra accion
		    if(x%2)
		      printf("impar");
		    else
		      printf("par");
		break;
		default:
			printf("No se eligio nada");
		break;
	}
	
/* if anidado

	printf("Escriba la edad: ");
	scanf("%d", &edad);
if(edad>=18)
 {
  if (edad>=65)
   {
   	 printf("Adulto mayor");
     }
    else
    {
     printf("Adulto");
   }
}
 else
  {
  	printf("Menor edad");
  }
  
	
	
	
*/
	getch();
	return 0;
}
