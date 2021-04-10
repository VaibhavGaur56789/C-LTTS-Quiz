/** @file mymath.c
* @brief The function definitions.
* @author Vaibhav Gaur
* @bug No bugs in this file
*/

#include<stdio.h>
#include "mymath.h"

void displayscore()
{
	char name[20];
	float s;
	FILE *f;
	system("cls");
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&s);
	printf("\n\n\t\t ");
	printf("\n\n\t\t %s has secured the Highest Score %.2f",name,s);
	printf("\n\n\t\t ");
	fclose(f);
	getch();
}

void help()
{
	system("cls");
	printf("\n\n\n\tThis game is very easy to play. You'll be asked some general questions");
	printf("\n\n\tregarding an engineering services company LnT and you will be");
	printf("\n\n\tprovided with four options. Your score will be calculated at the");
	printf("\n\n\tend. Remember that the more quicker you give answer the more");
	printf("\n\n\tscore you will secure. Your score will be calculated and displayed");
	printf("\n\n\tat the end. If you secure highest score, your score");
	printf("\n\n\twill be recorded. So BEST OF LUCK.");
}


void writescore(float score, char plnm[20])
{
	float sc;
	char nm[20];
	FILE *f;
	system("cls");
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	{
		sc=score;
		fclose(f);
		f=fopen("score.txt","w");
		fprintf(f,"%s\n%.2f",plnm,sc);
		fclose(f);
	}
}



