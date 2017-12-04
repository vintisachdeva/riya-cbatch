//prototype declare
//return_type function_name(No. of arguments);

void sum(); // declaration

// no return type and no arguments
void subtract();

void main(){
	sum();
	subtract();
	getch();

}
void sum(){ //define

	int first, second, total;
	clrscr();
	printf("Addition Function\n");
	printf("Enter your first value=");
	scanf("%d", &first);
	printf("Enter your second value=");
	scanf("%d", &second);
	total = first + second;
	printf("Result is = %d\n", total);
}

void subtract(){ //define

	int first, second, total;
	//clrscr();
	printf("Subtraction Function\n");
	printf("Enter your first value=");
	scanf("%d", &first);
	printf("Enter your second value=");
	scanf("%d", &second);
	total = first - second;
	printf("Result is = %d", total);
}