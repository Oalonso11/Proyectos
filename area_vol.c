//Programa que saca el volumen y area de una esfera
#include <stdio.h>
#include<math.h>
int main(){
  float radio, area, volumen;
  printf("Programa que encuentra el área y el volumen de una esfera en cm."
  printf("Inserte el radio en cm: ");
  scanf("%f", &radio);
  area = 4*M_PI*pow(radio,2);
  printf("El área de la esfera es: %.3f cm^2\n", area);
  volumen = 4*M_PI*pow(radio,3)/3;
  printf("El volumen de la esfera es: %.3f cm^3", volumen); 
  return 0;
}
