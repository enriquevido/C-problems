#include <stdio.h>
int main(){

    int ejercicios;
    scanf("%d", &ejercicios);

    for (int i=0; i< ejercicios; i++){

        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        int result_x, result_y;
        result_x = x1+x2;
        result_y = y1+y2;

        int respuesta_x, respuesta_y;
        char respuesta;

        scanf("%d %d", &respuesta_x, &respuesta_y);
        if (respuesta_x == result_x && respuesta_y == result_y){
            respuesta = 'A';
        }
        scanf("%d %d", &respuesta_x, &respuesta_y);
        if (respuesta_x == result_x && respuesta_y == result_y){
            respuesta = 'B';
        }
        scanf("%d %d", &respuesta_x, &respuesta_y);
        if (respuesta_x == result_x && respuesta_y == result_y){
            respuesta = 'C';
        }
        scanf("%d %d", &respuesta_x, &respuesta_y);
        if (respuesta_x == result_x && respuesta_y == result_y){
            respuesta = 'D';
        }
        printf("%c", respuesta);
    }
    return 0;
}