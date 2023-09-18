#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int vize,final;
	float ortalama;
	printf("vize degerini giriniz:\n");
	scanf("%d",&vize);
	printf("final degerini giriniz:\n");
	scanf("%d",&final);
	ortalama = (vize * 0.4) + (final * 0.6); 
    printf("Ortalama: %f \n", ortalama);
    
    
    
	
	if(ortalama >50 ){
	printf("dersten gectiniz :)\n");
	}
	else
	printf("dersten kaldiniz:(\n");
	
	
	
	
	if (final<50){
		printf(" finalden %d alti alan kalir, dersten kaldiniz:( \n ",50); 
	}
	
	getch();
	return 0;
	
}