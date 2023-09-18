/* 02prg01.c : sizeof operatörünün kullanımı */
#include <stdio.h>
#include<conio.h>
main()
{
 printf( "char : %d bayt\n", sizeof(char));
 printf( "short : %d bayt\n", sizeof(short));
 printf( "int : %d bayt\n", sizeof(int));
 printf( "long : %d bayt\n", sizeof(long));
 printf( "unsigned char : %d bayt\n", sizeof(unsigned
char));
 printf( "unsigned short : %d bayt\n", sizeof(unsigned
short));
 printf( "unsigned int : %d bayt\a \n", sizeof(unsigned int));
 printf( "unsigned long : %d bayt\n", sizeof(unsigned
long));
 printf( "float : %d bayt\n", sizeof(float));
 printf( "double : %d bayt\n", sizeof(double));
 printf( "long double : %d bayt\a", sizeof(long
double));
getch();
 return 0;
}
