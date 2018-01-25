#include<iostream.h>
#include<conio.h>

class Person{
	public:
		void personData(){
			cout<<"\n\nPerson Class Data";
		}

};
class Student{ //: public Person{
	private:
	int rollno;
	char grade;

	public:
	Student(){
		rollno = 1;
		grade = 'A';
	}
	void print(){
		cout<<"\nrollno is = "<<rollno;
		cout<<"\ngrade is = "<<grade;
	}
};

class Emp : public Person, public Student{
       private:
       int empId;
       public:
       Emp(){
		empId = 1001;
       }
       void details(){
	    cout<<"\nEmp id is = "<<empId;
       }

};

void main(){
	Emp obj;
	clrscr();
	obj.personData();
	obj.print();
	obj.details();
	getch();
}








