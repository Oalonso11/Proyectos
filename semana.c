/*Escribir un programa en el que se pida imgresar números entre 1 y 7.
Segun el número representar un día de la semana*/
#include <stdio.h>
int main (){
    int num;
    printf("Ingrese un número entre 1 y 7: ");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("Hoy es Lunes");
        break;
    case 2:
        printf("Hoy es Martes");
        break;
    case 3:
        printf("Hoy es Miércoles");
        break;
    case 4:
        printf("Hoy es Jueves");
        break;  
    case 5:
        printf("Hoy es Viernes");
        break;  
    case 6:
        printf("Hoy es Sábado");
        break;
    default:
        printf("Hoy es Domingo");
        break;
    }
    return 0;
}