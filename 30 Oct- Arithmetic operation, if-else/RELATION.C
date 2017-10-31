
void main()
{

	int value1, value2;
	clrscr();

	printf("\nEnter your first value= ");
	  //& -> ampersand operator
	scanf("%d", &value1);// 2 things -->type or format of value

	printf("\nEnter your second value= ");
	scanf("%d",&value2);

	//decision making statments
	if(value1 > value2)
	{  //multiple statments to print for if then we use curely brackets{}
		printf("\nFirst value is greater");
		printf("\nIm printing another statment");
	}
	else if(value2 > value1)
	{
		printf("Second value is greater");
		printf("\n printing again....");
	}
	else{
		printf("Both are equal");
	}
	getch();

}
