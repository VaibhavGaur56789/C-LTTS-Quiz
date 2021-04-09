//#ifndef displayScore

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

//#define displayScore
//#endif // displayScore
