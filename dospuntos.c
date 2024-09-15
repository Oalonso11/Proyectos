// Programa que calcula la distancia entre 2 puntos 
#include <math.h>
#include <stdio.h>
int main() {
  float x1,x2,y1,y2,d;
  printf("Programa que encuentra la distancia entre dos puntos\n");
  printf("Ingrese la coordenada x1: ");
  scanf("%f",&x1);
  printf("Ingrese la coordenada y1: ");
  scanf("%f",&y1);
  printf("Ingrese la coordenada x2: ");
  scanf("%f",&x2);
  printf("Ingrese la coordenada y2: ");
  scanf("%f",&y2);
  d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
  printf("El punto x1 es: %.2f\n",x1);
  printf("El punto y1 es: %.2f\n",y1);
  printf("El punto x2 es: %.2f\n",x2);
  printf("El punto y2 es: %.2f\n",y2);
  printf("La distancia entre los puntos es: %.2f",d);
  return 0;
}
