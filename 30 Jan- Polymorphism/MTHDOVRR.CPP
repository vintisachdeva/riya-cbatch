#include<iostream.h>
#include<conio.h>
class Data{
	public:
	void print(){
		cout<<"\nprint of Data class";
	}

};
class Emp: public Data{
	public:
	void print(){
		cout<<"\nprint of Emp class";
	}
};

void main(){
	Emp emp;
	Data data;
	clrscr();
	data.print();
	emp.print();
	getch();
}
