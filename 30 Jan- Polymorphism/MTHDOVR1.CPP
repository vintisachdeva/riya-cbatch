#include<iostream.h>
#include<conio.h>

class Data{
	public:

// method overloading --> method return type, method no. of arguments
			//but name of method will remain same
	void print(){
		cout<<"print data";
	}

	void print(int value){
		cout<<"\nprint data "<<value;
	}

	void print(int value1, int value2){
		cout<<"\nprint data value1 = "<<value1<<" value2 = "<<value2;
	}
};

void main(){
	Data obj;
	clrscr();
	obj.print();
	obj.print(54);
	obj.print(12, 54);
	getch();
}
