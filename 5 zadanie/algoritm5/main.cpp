#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
setlocale(LC_ALL,"rus");
int i;
struct student
	{
	char secondname[20];
	char name[20], facult[20];
	char zachetka[20];
	} stud[3];
char secondname1[20];
char name1[20];
char facult1[20];
char zachetka1[20];
		for(i=0;i<3;i++)
		{	
			printf("������� ������� ��������:");
			scanf("%s",&stud[i].secondname);
			printf("\n");
				printf("������� ��� ��������:");
				scanf("%s",&stud[i].name);
				printf("\n");
					printf("������� ��������� ��������:");
					scanf("%s",&stud[i].facult);
					printf("\n");
						printf("������� ����� �������:");
						scanf("%s",&stud[i].zachetka);
						printf("\n");			
		}
			
							printf(" |               ������ � ���������                  |\n");
							for(i=0;i<3;i++)
							{
								printf(" |%15s%10s| |%10s| |%10s| \n", stud[i].secondname,stud[i].name,stud[i].facult,stud[i].zachetka);
	
							}
		printf("����� ��������:\n");
			printf("������� ������� ��������:");
			scanf("%s",&secondname1);
			printf("������� ��� ��������:");
			scanf("%s",&name1);
			printf("������� ��������� ��������:");
			scanf("%s",&facult1);
			printf("������� ����� �������:");
			scanf("%s",&zachetka1);

			int metka=0;
			for(int i=0;i<3;i++)
	{
		if(strcmp(stud[i].secondname,secondname1)==0 || strcmp(stud[i].name,name1)==0 || strcmp(stud[i].facult,facult1)==0 || (stud[i].zachetka,zachetka1)==0)
		{
			metka=1;
		printf("��������� �������\n");
		printf("|%10s%7s| |%10s| |%10s|", secondname1,name1,facult1,zachetka1);
		system("Pause");
		}
	
	else
	{
		printf("\n���������� ���\n");
		
	}
	system("Pause");
	}
}

