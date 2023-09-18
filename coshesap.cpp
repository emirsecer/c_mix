#include<stdio.h>
#include<conio.h>

int main()
{
	float terim=1,emir=1,i=1,x,j;
	int n=1;
	printf("bir x sayisi giriniz:");
	scanf("%f",&x);
	for (j=1;j<10;j++)
{
terim= (-i)*(terim*x*x)/(n*(n+1));
emir=emir+terim;
i=i*(-1);
n=n+2;

		}
		printf("girilen f degerinin cosinusu %f dir \n ",x,emir);
		getch();
		return 0;
	}
	
