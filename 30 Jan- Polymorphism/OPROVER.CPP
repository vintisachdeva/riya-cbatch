#include<iostream.h>
#include<conio.h>
class Student
{
int rollno;
int age;

	public:
	Student(int rn, int ag)
	{
		rollno=rn;
		age=ag;
	}
	void operator --(int)
	{
	rollno-=1;
	age-=1;
	cout<<"\nRollno is = "<<rollno;
	cout<<"\nAge is = "<<age;
	}
};
void main()
{
clrscr();
Student obj(12,10);
obj--;
getch();
}