void main(){
	char first[20], second[20], result[20];
	int length;
	clrscr();

	printf("Enter first string=");
	gets(first);
	//printf("Enter second string=");
	//gets(second);
	printf("How many characters to be copied?\n");
	scanf("%d", length);

	//result = strncpy(second, first)

	//puts(strncpy(second, first, length));
	strncpy(second, first, length);

	second[length] = '\0';

	printf("%s",second);
	getch();
}