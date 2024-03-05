#include <stdio.h>
int main(){

    int boxes, points, sum, answer;
    scanf("%d", &boxes);

    for (int i = 0; i < boxes; i++){
        scanf("%d", &points);
        sum += points;
        if (sum <= 0){
            sum = 0;
        }
        if (sum > answer){
            answer = sum;
        }
    }

    printf ("%d", answer);
    return 0;
}