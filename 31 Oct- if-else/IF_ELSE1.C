
// to accept 3 no's from user and check which is greater

void main(){
	float first, second, third;   //declare
	clrscr();

	printf("Enter your first value="); //output
	scanf("%f",&first);                //input

	printf("Enter your second value=");
	scanf("%f", &second);

	printf("Enter your third value=");
	scanf("%f", &third);

	//logical and operator
	if((first > second) && (first > third))
	{
	   printf("First is greater");
	}
	else if((second > first) && (second > third))
	{
		printf("Second is greater");
	}
	else
	{
		printf("Third is greater");
	}
	getch();
}