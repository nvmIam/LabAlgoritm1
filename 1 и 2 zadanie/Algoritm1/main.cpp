#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main()
{	setlocale(LC_ALL,"rus");
	int N[10]={0,0,0,0,0,0,0,0,0,0};
	int a,min,max,result;
	srand((unsigned)time(NULL));
	printf("Massive\n");
	for	(a=0; a<10;a++)
	{
	N[a]=rand()%50-10;
	printf("|%4d", N[a]);
	}
	printf("|\n");
	min=INT_MAX;
	max=INT_MIN;
	for (a=0;a<10;a++)
	{
		if(N[a]<min)
		{
			min=N[a];
		}
	  if(N[a]>max)
	  {
		  max=N[a];
	  }
	}
	printf("������������ � ����������� �����:%d, %d \n",max,min);
	result=max-min;
	printf("�������� ������������� � ������������ �����: %d\n", result);
system("Pause");
}