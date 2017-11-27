void main(){

	int sub[5], i;
	clrscr();

	printf("Enter 5 values=");

	for(i = 0; i<=4; i++)
	{
		scanf("%d", &sub[i]);
	}
	printf("Values are=");

	for(i = 0; i<=4; i++)
	{
		printf("%d\n", sub[i]);
	}
	getch();

}