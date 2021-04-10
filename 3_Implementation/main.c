/** @file main.c
* @brief The application code.
* @author Vaibhav Gaur
* @bug No bugs in this file
*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
#include"mymath.h"

int main()
{
	int countq,countr;
	int r,i;
	int pa;int nq[6];int w;
	float score;
	char choice;
	char playername[20];
	time_t initialtime,finaltime;
	system("cls");
	//randomize();
	mainhome:
	system("cls");
	puts("\n\t\t WELCOME TO LnT TEST PROGRAM....\n\n") ;
	puts("\n\t\t-------------------------------");
	puts("\n\t\t Enter 'S' to start game       ");
	puts("\n\t\t Enter 'V' to view high score  ");
	puts("\n\t\t Enter 'H' for help            ");
	puts("\n\t\t Enter 'Q' to quit             ");
	printf("\n\t\t-------------------------------\n\n\t\t  ");
	choice=toupper(getch());
	if (choice=='V')
	{
		displayscore();
		goto mainhome;
	}
	else if (choice=='Q')
	exit(1);
	else if (choice=='H')
	{
		help();
		getch();
		goto mainhome;
	}
	else if(choice=='S')
	{
		system("cls");
		printf("\n\n\n\t\t\tEnter Your Name...");
		printf("\n\t\t\t");
		gets(playername);
		home:
		system("cls");
		initialtime=time(NULL);
		countq=countr=0;
		i=1;
		start:
		srand ( time(NULL) );
		r=rand()%23+1;
		nq[i]=r;
		for (w=0;w<i;w++)
		if (nq[w]==r) goto start;
		switch(r)
		{
			case 1: printf("\n\nFull form of L&T?");
				printf("\nA.Larsen and Toubro\tB.Limited Technology\nC.Larson and Turbo\tD.Lunatic Tech\n");
				countq++;
				if (toupper(getch())=='A')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is A.Larsen and Toubro");
					break;
				}
			case 2:	printf("\n\nFounder of L&T were from which country?");
				printf("\nA.Australia\tB.Sweden\nC.Denmark\tD.Netherlands\n");
				countq++;
				if (toupper(getch())=='C')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				printf("\n\nWrong!!! The correct answer is C.Denmark");
				break;
			case 3:	printf("\n\nWhere is the headquater of L&T located?");
				printf("\nA.Noida\tB.Kolkata\nC.Mumbai\t\tD.Gujrat\n");
				countq++;
				if (toupper(getch())=='C')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is C.Mumbai");
					break;
				}
			case 4:	printf("\n\nL&T was founded in which year?");
				printf("\nA.1970\tB.1956\nC.1938\t\tD.1998\n");
				countq++;
				if (toupper(getch())=='C')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is C.1938");
					break;
				}
			case 5:	printf("\n\nIn L&TTS, what does TS stands for?");
				printf("\nA.Technical Stupid\tB.Technology Services\nC.Technical Services\t\tD.True Science\n");
				countq++;
				if (toupper(getch())=='B')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is B.Technology Services");
					break;
				}
			case 6:	printf("\n\nWho is the CEO of LTTS?");
				printf("\nA.Mr. Amit Chadha\tB.Mr. Kesab Panda\nC.Mr. Elon Musk\tD.Mr. White\n");
				countq++;
				if (toupper(getch())=='A')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is A.Mr. Amit Chadha");
					break;
				}
			case 7:	printf("\n\nL&T belong to which country?");
				printf("\nA.China\tB.Denmark\nC.India\tD.USA\n");
				countq++;
				if (toupper(getch())=='C')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is C.India");
					break;
				}
			case 8:	printf("\n\nWhere is headquater of LTTS located?");
				printf("\nA.Noida\t\tB.Vadodra\nC.Mumbai\tD.Kolkata\n");
				countq++;
				if (toupper(getch())=='B')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is B.Vadodra");
					break;
				}
			case 9: printf("\n\nParent organization of LTTS is?");
				printf("\nA.TCS\tB.L&T\nC.Cognizant\t\tD.Infosys\n");
				countq++;
				if (toupper(getch())=='B')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is B.L&T");
					break;
				}
			case 10:printf("\n\nWhen LTTS was founded?");
				printf("\nA.2012\tB.2000\nC.2004\tD.1998\n");
				countq++;
				if (toupper(getch())=='A')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is A.2012");
					break;
				}
			case 11:printf("\n\nIn L&TI, I stands for?");
				printf("\nA.Infotech\tB.Information\nC.Industry\t\tD.India\n");
				countq++;
				if (toupper(getch())=='A')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is A.Infotech");
					break;
				}
			case 12:printf("\n\nWhere is headquarter of LTI?");
				printf("\nA.Kolkata\t\tB.Mumbai\nC.Vadodra\tD.Nepal\n");
				countq++;
				if (toupper(getch())=='B')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is B.Mumbai");
					break;
				}
			case 13:printf("\n\nWho is the CEO of LTI?");
				printf("\nA.Mr. Sundar Pichai\t\tB.Mr. Amit Chadha\nC.Mr. Sanjay Jalona\tD.Mr. Kesab Panda\n");
				countq++;
				if (toupper(getch())=='C')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is C.Mr. Sanjay Jalona");
					break;
				}
			case 14:printf("\n\n");
				printf("\nA.First\tB.Front\nC.Top\tD.Rear\n");
				countq++;
				if (toupper(getch())=='C')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is C.Top");
					break;
				}
			case 15:printf("\n\nWhat type of company is L&T?");
				printf("\nA.Construction\tB.Gaming\nC.Software\tD.Product\n");
				countq++;
				if (toupper(getch())=='A')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is A.Construction");
					break;
				}
			case 16:printf("\n\nIs LTTS a good company to work for?");
				printf("\nA.NO\tB.YES :)\nC.Don't Know\t\tD.mehh:|\n");
				countq++;
				if (toupper(getch())=='B')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is B.YES :)");
					break;
				}
			case 17:printf("\n\nThis platform belong to L&T?");
				printf("\nA.ATL\tB.Instagram\nC.MS Teams\tD.Snapchat\n");
				countq++;
				if (toupper(getch())=='A')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is A.ATL");
					break;
				}
			case 18:printf("\n\nPre-Onboarding program launched by LTTS is named as?");
				printf("\nA.StepUp\tB.StepDown\nC.StepIn\tD.StepSide\n");
				countq++;
				if (toupper(getch())=='C')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is C.StepIn");
					break;
				}
			case 19:printf("\n\nL&T rank in forbes global employer list?");
				printf("\nA.22\tB.55\nC.26\tD.40\n");
				countq++;
				if (toupper(getch())=='A')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is A.22");
					break;
				}
			case 20:printf("\n\nLTTS serves?");
				printf("\nA.Worldwide\tB.Only in India\nC.Only in Gujrat\tD.Denmark\n");
				countq++;
				if (toupper(getch())=='A')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is A.Worldwide");
					break;
				}
			case 21:printf("\n\nConstruction project of 2022 Fifa World cup is given to?");
				printf("\nA.Afcons\tB.HCC\nC.TATA\tD.L&T\n");
				countq++;
				if (toupper(getch())=='D')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is D.L&T");
					break;
				}
			case 22:printf("\n\nL&T would be constructing FIFA 2022 stadium in?");
				printf("\nA.Rio de Janerio\tB.USA\nC.South Africa\tD.Qatar\n");
				countq++;
				if (toupper(getch())=='D')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is D.Qatar");
					break;
				}
			case 23:printf("\n\nWhat rank LTI hold in institutional investor at 2020?");
				printf("\nA.1\tB.7\nC.15\t\tD.22\n");
				countq++;
				if (toupper(getch())=='A')
				{
					printf("\n\nCorrect!!!");
					countr++;
					break;
				}
				else
				{
					printf("\n\nWrong!!! The correct answer is A.1");
					break;
				}
		}
		i++;
		if (i<=5) goto start;
		finaltime=time(NULL);
		score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
		if (score<0) score=0;
		printf("\n\n\nYour Score: %.2f",score);
		if (score==100) printf("\n\nEXCELLENT!!! KEEP IT UP");
		else if (score>=80 && score<100) printf("\n\nVERY GOOD!!");
		else if (score>=60 &&score<80) printf("\n\nGOOD! BUT YOU NEED TO KNOW MORE.");
		else if (score>=40 && score<60) printf("\n\nSATISFACTORY RESULT, BUT THIS MUCH IS NOT SUFFICIENT.");
		else printf("\n\nYOU DON'T KNOW ANYTHING ABOUT L&T.");
		puts("\n\nNEXT PLAY?(Y/N)");
		if (toupper(getch())=='Y')
		goto home;
		else
		{
			writescore(score,playername);
			goto mainhome;
		}
	}
	else
	{
		printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
		goto mainhome;
	}
	return 0;
}
