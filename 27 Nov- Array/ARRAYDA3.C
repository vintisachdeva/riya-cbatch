
// WAP to input 3 subject marks in array and print total and percentage

void main(){
	 int subjects[3], i, total=  0, percentage;
	 clrscr();
	 printf("Enter your marks in 3 subjects=");

	 for(i = 0; i<3; i++){
		scanf("%d", &subjects[i]);   //subjects[0]=67, subjects[1]=56, subjects[2]=45
	 }
	 for(i = 0; i<3; i++)   // i++ = i = 3<3
	 {
		total = total + subjects[i]; //total + subjects[2] = 0 + 67 = 67 + 56 = 123 + 45 = 168
	 }
	 printf("Total marks are = %d\n", total);

	 percentage = total/3;

	 printf("Percentage is = %d", percentage);

	 //scanf("%d", &subjects[0]);
	 //scanf("%d", &subjects[1]);
	 //scanf("%d", &subjects[2]);

	 getch();

}