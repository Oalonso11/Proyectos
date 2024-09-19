/*Programa para calcular la velocidad de los corredores
en m/s de los corredores en una carrera de 1,500m*/
#include <stdio.h>
#include <math.h>
int main(){
    const int distancia = 1500;
    int min, seg;
    float velocidad;
    printf("Ingrese el tiempo total de minutos: ");
    scanf("%d",&min);
    min *= 60;
    printf("Ingrese el timepo total de segundos: ");
    scanf("%d",&seg);
    seg += min;
    velocidad = distancia/(float)seg;
    printf("La velocidad del corredor es de: %.6f m/s",velocidad);
    
    return 0;
}
