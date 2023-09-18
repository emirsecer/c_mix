#include<stdio.h>
#include<conio.h>
main()
{
	int sayilar[]={};
	int i,j,toplam;
	toplam=0;
	
	for (i=0;i<=4;i++){
		printf("bir sayi giriniz");
		scanf("%d",&i);
		sayilar[i];
		toplam=toplam+ sayilar[i];	
	}
	printf("tum sayilar alindi.\n ");
	printf("sayilarin toplami %d dir\n",toplam);
	printf("sayialarin ortalamasi %d dir.",toplam/10);
	
	getch();
	return 0;
	
	
}