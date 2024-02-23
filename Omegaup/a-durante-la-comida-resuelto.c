#include <stdio.h>
#include <string.h>

int main(){
    char string[1000];
    scanf("%s", string);
    int tamano = strlen(string);

    int ms = 0, is = 0, gs = 0, us = 0, es = 0, ls = 0;

    for (int i=0; i<tamano; i++){
        if(string[i] == 'm') ms++;
        if(string[i] == 'i') is++;
        if(string[i] == 'g') gs++;
        if(string[i] == 'u') us++;
        if(string[i] == 'e') es++;
        if(string[i] == 'l') ls++;
    }
    int formas = ms;
    if (is < formas) formas = is;
    if (gs < formas) formas = gs;
    if (us < formas) formas = us;
    if (es < formas) formas = es;
    if (ls < formas) formas = ls;

    printf("%d", formas);
    return 0;
}