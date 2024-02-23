#include <stdio.h>
int main(){
    char c;
    int x, y;

    scanf("%c %d", &c, &y);
    x = c - 'a' + 1;

    if (x % 2 == y % 2){
        printf("NEGRO");
    } else{
        printf("BLANCO");
    }

    return 0;
}
