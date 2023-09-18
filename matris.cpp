#include <stdio.h>

int main() {
    int rowsA, columnsA, rowsB, columnsB;
    printf("a matrisinin satirini girin: ");
    scanf("%d", &rowsA);
    printf("a matrsinin sutununu girin ");
    scanf("%d", &columnsA);
    printf("b matrsinin satirini girin: ");
    scanf("%d", &rowsB);
    printf("b matrisinin sutununu girin: ");
    scanf("%d", &columnsB);

   
    int a[rowsA][columnsA], b[rowsB][columnsB], c[rowsA][columnsA];
    printf(" a matrisinin eleman sayisi:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < columnsA; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("b matrisinin eleman sayisi:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < columnsB; j++) {
            scanf("%d", &b[i][j]);
        }
    }

  
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < columnsA; j++) {
            c[i][j] = a[i][j] + 3 * b[i][j];
        }
    }

    printf("c matrisi :\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < columnsA; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
