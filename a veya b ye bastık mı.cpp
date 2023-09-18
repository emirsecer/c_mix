 #include<stdio.h>
#include<conio.h>
int  main(void )
 {
 	char kr;
 	printf("lutfen bir karakter giriniz:\n");
 	kr=getchar();
 	switch (kr)
 	{
 		case'a':
 			printf("a harfine bastiniz\n");
 			break;
 			case 'b':
 				printf("b harfine bastiniz/n");
 				break;
 				default :
 					printf("a veya b tusuna basmadiniz /n ");
 					break;
 					
	 }
	 getch();
	 return 0;
	 
 }