// wap to input marks of students in 3 subjects --> eng, maths, science.
// calculate the total marks, percentage and grade
// print --> total marls, percentage and grade
// grade -->  percentage --> greater than 80  --> A grade
			 //  greater than 60 and less than 80 --> B grade
			 // greater than 50 and less than 60 --> C grade
			 // less than 50 --> D grade


void main(){

	int eng, maths, sci, totalMarks;
	float percentage;

	clrscr();
	printf("Enter your marks in English=");
	scanf("%d", &eng);

	printf("Enter your marks in Maths=");
	scanf("%d", &maths);

	printf("Enter your marks in Science=");
	scanf("%d", &sci);

	totalMarks = eng + maths + sci;

	percentage = totalMarks/3;     //57.90


	printf("\nYour total marks are = %d", totalMarks);
	printf("\nYour percentage is = %.2f", percentage);


	if(percentage >= 80 && percentage<100)
	{
		printf("\nA Grade");
	}else if((percentage >= 60) && (percentage < 80))
	{
		printf("\nB Grade");
	}
	else if((percentage >= 50) && (percentage < 60))
	{
		printf("\nC Grade");
	} else if(percentage < 50)
	{
		printf("\nD Grade");
	}
	getch();

}