#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"rus");

//Создание динамич. массива
int **mass;
int a,b,i,j;
int g=0;

printf("Введите количество строк:");
scanf("%d",&a);
printf("Введите количество столбцов:");
scanf("%d",&b);
mass=(int**)malloc(a*sizeof(int*));
for(i=0;i<a;i++)
{
	mass[i]=(int*)malloc(b*sizeof(int));
}
//Заполнение матрицы
srand((unsigned) time(NULL)); 
	printf("Table of matrix:");

		for(i=0;i<a;i++)
		{ 
		printf("\n");
			
			for(j=0;j<b;j++)
			{
			mass[i][j]=rand()%50-10;
			printf(" |%3d| ", mass[i][j]);
			}
		}		
printf("\n\nСумма столбов:|");
				
				for(j=0;j<b;j++)
				{ 
				g=0;

					for(i=0;i<a;i++)
					{
					g+=mass[i][j];							
					}
					printf("%d|",g);
				}
printf("\n");
system("pause");
return 0;
}
