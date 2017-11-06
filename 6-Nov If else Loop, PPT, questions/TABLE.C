void main(){
	int value, i;
	clrscr();

	printf("Enter a number = ");
	scanf("%d", &value);

	for(i = 1; i<=10; i++)
	{
		printf("%d\n", value*i); //2 * 11 =  6
	}
	getch();
}