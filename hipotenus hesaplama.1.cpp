#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()

{

	 int sayi ;
   float kenar1karesi, kenar2karesi;
    	
		printf("Sayiyi Giriniz(1): ");
    scanf("%d", &sayi);
     kenar1karesi = pow(sayi, 2);
     printf("kare1 = %.3lf\n \a", kenar1karesi);
     
    getchar();
      printf("ilerlemek icin herhangi bir tusa basiniz\n .");
       	printf("Sayiyi Giriniz(2): ");
    scanf("%d", &sayi);
     kenar2karesi = pow(sayi,2);
     	printf("kare2 = %.3lf \n \a", kenar2karesi);
     	printf("ilerlemek icin bir tusa basınız");
     	getchar();
     	
     float x;
     x=kenar1karesi+kenar2karesi;
     	printf("kareler toplami %f dir.\n",x);
     x=sqrt(x);
     
   		printf("\n");
     	printf("hipotenusunuz %f dir \a \n ",x);
    
     	round(  x );
     	printf(" \" hipotenusunuz tam sayi olarak %f dir.\" \n ",round (x));
     	printf("\n");
     	
    	printf("---------program sonu------- ");
    	printf ("\a");
     getch();
     return 0;
 }
     