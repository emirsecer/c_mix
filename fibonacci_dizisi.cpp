#include <stdio.h>

int main() {
    int n, i, birinci = 0, ikinci = 1, sonraki;

    printf("sayi giriniz: ");
    scanf("%d", &n);

    printf("fibonacci diziniz :\n", n);

    for (i = 0; i < n; i++) {
        if (i <= 1)
            sonraki = i;
        else {
            sonraki = birinci+ ikinci;
            birinci =ikinci ;
            ikinci = sonraki;
        }
        printf("%d, ", sonraki);
    }

    return 0;
}
