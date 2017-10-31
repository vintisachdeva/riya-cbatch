void main(){

	//arithmetic operators

	int first = 100, second = 50, result;
	clrscr();
	//	+ - / * % ++ --

	result = first + second;
	printf("Result Add= %d\n", result);    // 150

	result = first - second;
	printf("Result Subtract= %d\n", result);     //50

	result = first * second;
	printf("Result Multiply= %d\n", result);         //5000

	result = first / second;                        //20
	printf("Result Divide= %d\n", result);

	result = first % second;                        //
	printf("Result Modulus= %d\n", result);

	result = first++;        //increment operator          //
	first++;	//post fix operators // post increment
	//100++
	printf("Result UnaryPlus= %d\n", result);

	result = second--;	//decrement operator
	printf("Result UnaryMinus= %d\n", result);

	getch();
}