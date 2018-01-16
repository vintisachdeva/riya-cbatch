#include<iostream.h>
#include<conio.h>

class Loop{
public:
	void whileLoop(){
		int i = 2;
		cout<<"\nOutput of While Loop:"<<endl;
		while(i<=10){
			cout<<i<<endl;
			i+=2;
		}
		i = 1;
		cout<<"\nOutput of Do-While Loop:"<<endl;
		do{
		  cout<<i<<endl;
		  i++;
		}while(i<=10);
		cout<<"\nOutput of For Loop:"<<endl;
		for(i = 0; i<=10; i++){
			cout<<i<<endl;
		}

	}

};
// Loop --> initialization, condition, increment/decrement
void main(){
	clrscr();
	Loop loop;
	loop.whileLoop();
	getch();
}
