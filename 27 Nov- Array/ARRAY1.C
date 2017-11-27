//Program tp print the elements of array

#include<conio.h>
#include<stdio.h>
void main()
{
	int val[5]={1,2,3,4,5},i;
	clrscr();
	/*printf("Enter 5 values in array\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&val[i]);
	} */
       //	printf("Elements stored in array are=%d\n",val[i]);
	for(i=0;i<=4;i++)
	{
		printf("%d\n",val[i]);
	}
	getch();
	}