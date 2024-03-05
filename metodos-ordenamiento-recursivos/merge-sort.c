#include <stdio.h>
#include <stdlib.h>

// Función para combinar dos subarreglos ordenados en uno solo
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    
    // Crear arreglos temporales
    int L[n1], R[n2];
    
    // Copiar los datos a los arreglos temporales L[] y R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    
    // Combinar los arreglos temporales de vuelta en arr[l..r]
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    // Copiar los elementos restantes de L[], si hay alguno
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    // Copiar los elementos restantes de R[], si hay alguno
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Función recursiva para dividir y ordenar el arreglo
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Encontrar el punto medio del arreglo
        int m = l + (r - l) / 2;
        
        // Ordenar recursivamente las mitades izquierda y derecha
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        
        // Combinar las mitades ordenadas
        merge(arr, l, m, r);
    }
}

// Función para imprimir el arreglo
void printArray(int A[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

// Función principal
int main() {
    int arr[] = {25, 67, 77, 23, 32, 32, 34};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Arreglo original:\n");
    printArray(arr, arr_size);
    
    // Llamar a la función de ordenamiento Merge Sort
    mergeSort(arr, 0, arr_size - 1);
    
    printf("\nArreglo ordenado:\n");
    printArray(arr, arr_size);
    
    return 0;
}
