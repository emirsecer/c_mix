#include <stdio.h>
 
main()
{
	
	int kullaniciadi,sifre,yazilimcibebe;
default :(kullaniciadi=yazilimcibebe) ;
default :(sifre= 12345a);	

printf("kullanici adinizi giriniz :\n");
scanf("%d",&kullaniciadi);
printf("sifrenizi giriniz \n");
scanf("%d ",&sifre);

if
{(kullaniciadi=default kulaniciadi) && (sifre=default sifre));
      printf("merhaba %d",kullaniciadi);
else();
    printf("bilgileri kontrol ediniz \n ");
}
	
    int bakiye = 1000;
    int islem,tutar;
    printf("atm ye hosgeldiniz ! \n");
    printf("Bakiyeniz: %d",bakiye);
    printf("\n\n**** ISLEMLER ****\n");
    printf("1. Para Cekme\n");
    printf("2. Para Yatirma\n");
    printf("3. Para Bakiye Sorgulama\n");
    printf("4. Kart Iade\n");
    
    printf("Isleminizi seciniz : ");
    scanf("%d",&islem);
    
    switch(islem){
        case 1:
                   printf("Bakiyeniz : %d\n",bakiye);
                   printf("Cekmek istediginiz tutari giriniz : ");
                   scanf("%d",&tutar);
                   if(tutar>1000){
                   printf("Yetersiz bakiye tekrar giriniz !!");
                   scanf("%d",&tutar);
            }
                     bakiye -= tutar;
                     printf("Yeni Bakiyeniz : %d",bakiye);
                     break;
        case 2:
                     printf("Bakiyeniz : %d\n",bakiye);
                     printf("Yatirmak istediginiz tutari giriniz : ");
                     scanf("%d",&tutar);
                     bakiye += tutar;
                     printf("Yeni Bakiyeniz : %d",bakiye);
                     break;
        case 3:
                     printf("Bakiyeniz : %d\n",bakiye);
                     break; 
        case 4:
                 printf("Kartinizi almayi unutmayin!");
                     break;                 
    }
 
}
