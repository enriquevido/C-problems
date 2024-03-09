#include <stdio.h>
#include <math.h>

int main(){

    int n_casos, n1, n2;
    scanf("%d", &n_casos);

    long long suma[41], suma_acumulada = 0;
    suma[0] = 1;

    for (int i = 1; i <= 40; i++){
        suma[i] = 2 * suma[i-1];
    }

    for (int j = 0; j < n_casos; j++){
        scanf("%d %d", &n1, &n2);
        suma_acumulada = 0;

        for (int k = n1; k <= n2; k++){
            suma_acumulada += suma[k];
        }
        printf("%lld\n", suma_acumulada);
    }
    return 0;
}