//2. no return type with argument
//declare
void sum(float, int);//datatype

void main(){

      sum(10.4, 10);
      getch();
}

void sum(float first, int second)
{
       float total;
       clrscr();
       total = first + second;
       printf("Result is = %f", total);
}

