#include<iostream.h>
#include<conio.h>
class Student{
	private:
		int rollno;
		float percentage;

	public:
	Student(int r, float p){
	   rollno = r;
	   percentage = p;
	}
	void print(){
		cout<<"\nRollno is = "<<rollno;
		cout<<"\nPercentage is = "<<percentage;
	}
};
void main(){
	Student obj(2, 54.3);  // automatically called from here
	Student obj1 = obj;    // copy constructor
	clrscr();
	obj.print();
	obj1.print();
	getch();
}