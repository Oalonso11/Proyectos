
/*Programa para calcular la velocidad de los corredores en m/s de los corredores
en una carrera de 1,500m*/
#include <stdio.h>
# include <math.h>
int main(){
 const int distancia = 1500;
 int min, seg;
 float velocidad, tiempototal;
 printf("Ingrese el tiempo total del corredor min,seg: ");
 scanf ("%d,%d",&min, &seg);
 tiempototal = (min+60) + seg;...
 velocidad = distancia/ (float) tiempototal;
 printf("La velocidad del corredor es de: %.6f m/s", velocidad);
 return 0;
}