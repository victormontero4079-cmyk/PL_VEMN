#include <stdio.h>
int main(){
	int edad,calf;
	printf("Escriba la edad: ");
	scanf("%d", &edad);
	printf("Escriba la calificacion: ");
	scanf("%d", &calf);
	
if(calf>=0)
{
if(edad>0)
{
 if (calf<=100)
  {	
   if(edad>=18)
   {
    if (edad>=65)
     {
   	 if(calf<60)
	  {
   	    printf("Adulto mayor reprobado");
      }
   	 else
   	 {
	 printf("Adulto mayor aprobado");
	  }
     }
    else
    {
     if (calf<60)
      { 
      printf("Adulto reprobado");
      }
     else
     {
       printf("Adulto aprobado");
      }
   }
}
 else
  {
  	if(calf<60)
  	{
  	 printf("Menor edad reprobado");
     }
     else
     {
     printf("Menor de edad aprobado");
	}
  }
}
else
{
printf("numero invalido, la calificacion no puede ser mayor a 100");
}
}
else
{
printf("La edad no puede ser negativa");
}
}
else
{
printf("La calificacion no puede ser negativa");
}
  return 0;
}
