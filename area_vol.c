//Programa que saca el volumen y area de una esfera
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include<math.h>
int main(){
  float radio, area, volumen;
  printf("Programa que encuentra el área y el volumen de una esfera mediante el radio en cm\n");
  printf("Inserte el radio en cm: ");
  scanf("%f", &radio);
  area = 4*M_PI*pow(radio,2);
  printf("El área de la esfera es: %.3f cm^2\n", area);
  volumen = 4*M_PI*pow(radio,3)/3;
  printf("El volumen de la esfera es: %.3f cm^3\n", volumen); 
  printf("Fin del programa");
  return 0;
}
