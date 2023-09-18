#include<stdio.h>
#include<conio.h>
main()
{
	int sayi;
	printf("dongu basliyor.\n");
	do 
	{
	
		printf("bir sayi giriniz :\n");
		scanf("%d",&sayi);
		printf("iki kati 	: %d \n", 2*sayi);
		
	} 
	while(sayi>0);
	printf("dongu sona erdi .");
	getch();
	return 0;
	
	
}