//check whether user's entered no. is even or odd

void main(){

	int userValue;
	clrscr();

	printf("Enter your value=");
	scanf("%d",&userValue);

	// %  modulus operator used to check remainder
	// == comparision operator used to check whether the left and right values are equal
	if(userValue % 2 == 0) // 15%2 --> 1 == 0
	{
		printf("%d is even number", userValue);
	} else{
		printf("%d is odd number", userValue);
	}

	getch();
}