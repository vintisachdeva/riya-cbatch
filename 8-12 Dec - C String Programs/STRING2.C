void main()
{
	char data1[20], data2[20];
	clrscr();
	printf("Enter first string=");
	gets(data1);
	printf("\nEnter second string=");
	gets(data2);
	//printf("Your copied data is = %s", strcpy(data2, data1));
	printf("Your concatenated data is = %s", strcat(data1, data2));
	getch();
}