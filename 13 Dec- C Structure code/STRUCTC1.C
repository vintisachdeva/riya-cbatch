struct student_details{
    char name[20];   // 20 characters 1 byte => 20 * 1 = 20 bytes
    int rollno;     //  2 bytes * 1 => 2 bytes          ==> 22 bytes
};

void main(){

	int i;
	struct student_details s1[2];  // 22 * 2 = 44 bytes
	clrscr();
	printf("Enter first name=");
	gets(s1[0].name);
	s1[0].rollno = 1;

	printf("Enter second name=");
	gets(s1[1].name);
	s1[1].rollno = 87;

	printf("Enter third name=");
	gets(s1[2].name);
	s1[2].rollno = 8;


	for(i = 0; i<=2; i++){
		printf("Rollno=%d\n", s1[i].rollno);
		printf("Name = %s\n",s1[i].name);
	}
	printf("Size = %d", sizeof(s1));

	//printf("Rollno=%d", s1[0].rollno);
	//puts(s1[0].name);
	//printf("Rollno=%d", s1[1].rollno);
	//puts(s1[1].name);

	getch();

}