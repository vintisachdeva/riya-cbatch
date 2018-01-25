#include<iostream.h>
#include<conio.h>
class Student{
      public:
      Student(){
		cout<<"\nConstructor is called";
      }
      ~Student(){
		cout<<"\nDestructor is called";
	}

};
void main(){
	clrscr();
	Student obj;
	getch();
}