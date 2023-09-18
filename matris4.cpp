#include<stdio.h>

int main() {
 int satirsa, sutunsa, satirsb, sutunsb;
 printf("A matrisi için satır sayısını girin: ");
 scanf("%d" ,&satirsa);
 printf("A matrisi için sutun sayisini girin: ");
 scanf("%d", &sutunsa);
 printf("B matrisi için satır sayısını girin: ");
 scanf("%d" , &satirsb);
 printf("B matrisi için sütun sayısını girin: ");
 scanf("%d",&sutunsb);


 }

 int a[satirsa][Sutunsa], b[satirsb][sutunsb], c [satirsa][Sutunsa];
 printf("A matrisinin öğelerini girin:\n");
for (int i = 0; i < satirsa; i++) {
 for (int j = 0; j < sutunsa; j++) {
 scanf("%d", &a[i][j]);
 }
 }
 printf("B matrisinin öğelerini girin: \n");
 for (int i = 0; i < rowsB; i++) {
 for (int j = 0; j < sutunsb; j++) {
 scanf("%d", &b[i][j]);
 }
 }

for (int i = 0; i < satirsa; i++) {
 for (int j = 0; j < sutunsa; j++) {
 c [i][j] = a[i][j] + 3 * b[i] [j];
 }
 }

 printf("Matris C:\n");
 for (int i = 0; i < satirsa; i++) {
 for (int j = 0; j < sutunsa; j++) {
 printf("%d ", c[i][j]);
 }
 printf("\n");
 }

 return  0;
}