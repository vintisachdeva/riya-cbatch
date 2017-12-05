//no return type --> no argument
//no return type --> with argument


// with return type --> no argument
// return_type function_name(no. of arguments)



double sum();
void main(){
	double result = sum();
	printf("\n%lf", result);
	getch();
}

double sum(){

	double first, second, total;
	clrscr();

	printf("Enter your first value=");
	scanf("%lf", &first);
	printf("\nEnter your second value=");
	scanf("%lf", &second);

	total = first + second;
	return total;

}