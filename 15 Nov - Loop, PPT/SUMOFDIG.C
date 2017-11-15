void main(){

	int userChoice, sum = 0, temp = 0;
	clrscr();

	printf("Enter your value=");

	scanf("%d", &userChoice);  //123

	while(userChoice!=0){  //123
		temp = userChoice % 10;
		sum = sum + temp;
		userChoice = userChoice / 10;
	}
	printf("Sum = %d", sum);
	getch();
}