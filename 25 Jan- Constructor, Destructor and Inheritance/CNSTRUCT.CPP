#include<iostream.h>
#include<conio.h>
class Student{
	private:
		int rollno;
		char name[25];

	public:
	Student(){
	   rollno = 1;
	}
	void print(){
		cout<<"\nRollno is = "<<rollno;
	}
};
void main(){
	Student obj;  // automatically called from here
	clrscr();
	obj.print();
	getch();
}