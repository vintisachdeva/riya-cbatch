void main(){

	char firstData[20], secondData[20];
	int result;

	clrscr();

	printf("Enter first value=");
	gets(firstData);
	printf("\nEnter second value=");
	gets(secondData);
	//printf("Your data is = %d", strcmp(firstData, secondData));

	result = strcmp(firstData, secondData);

	if(result>0){
		printf("First string is greater than second");
	}else if(result<0){
		printf("Second string is greater than first");
	} else{
		printf("Both are equal");
	}
	getch();

}