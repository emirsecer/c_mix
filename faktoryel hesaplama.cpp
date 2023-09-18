#include<stdio.h>
#include<conio.h>
main()
{
 long  i,n,faktor;
	printf("faktoryeli alinacak sayiyi giriniz:\n");
	scanf("%ld",&n);
	
	faktor=1;
	for (i=1;i<=n; i++)
	{
		faktor*=i;
	}
	printf("%ld =%ld\n",n,faktor);
	getch();
	return 0;
}