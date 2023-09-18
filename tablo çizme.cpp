#include<stdio.h>
#include<conio.h>

void kutu_ciz(int satir,int sutun)
{
	int sut ;
	for (; satir>0 ; satir--)
	{
 for (sut=sutun; sut>0; sut--)
	printf("o");
	printf("\n");

}

}
int main () 
{


	kutu_ciz(25,50);
	getch();
	return 0 ;
}