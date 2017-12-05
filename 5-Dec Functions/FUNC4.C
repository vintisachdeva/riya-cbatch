//with return_type and with argument

int sum(int, int);
void main(){
	int first, second, result;
	clrscr();

	printf("Enter your first value=");
	scanf("%d", &first);  //first = 20
	printf("Enter your second value=");
	scanf("%d", &second);  // second = 30

	result = sum(first , second); //sum(20, 30)
	printf("\n%d", result);
	getch();
}

int sum(int first, int second){

	int total;
	total = first + second;
	return total;
}