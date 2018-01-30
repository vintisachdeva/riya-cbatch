#include<iostream.h>
#include<conio.h>

class Student{
	int rollno;
	int age;

	public:

	Student(int r,int a)  // parameterized constructor
	{
		rollno=r; // 10
		age=a;    // 20
	}

	void operator ++()
	{
	rollno=rollno+1;  // 10 + 1 = 11
	age=age+1;        //20 + 1 = 21
	cout<<endl<<"Age is = "<<age;
	cout<<endl<<"Rollno is = "<<rollno;
	}
};
void main()
{
clrscr();
Student ram(10,20);
++ram;
getch();
}


