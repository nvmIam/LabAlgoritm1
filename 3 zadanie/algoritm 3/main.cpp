#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"rus");
srand((unsigned)time(NULL));
int size = 0;
printf("¬ведите размер массива:");
scanf("%d", &size);
int *arr= (int*)malloc(size*sizeof(int));
//int *arr= new int[size];
	for(int i=0; i<size;i++)
	{
		arr[i]=rand()%100;
		printf("%3d",arr[i]);
	}
delete [] arr;
printf("\n");
system("Pause");
return 0;
}