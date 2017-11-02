void main()
{
     int dow;
     clrscr();
     printf("enter your day");
     scanf("%d",&dow);
     switch(dow)
     {
	default:
	printf("Wrong day");
	break;
	case 1:
	printf("Monday");
	break;
	case 2:
	printf("Tuesday");
	break;
       case 3:
	printf("Wednesday");
	break;
	case 4:
	printf("Thursday");
	break;
       case 5:
	printf("friday");
	break;
	case 6:
	printf("saturday");
	break;
	case 7:
	printf("Sunday");
	break;
	}
	getch();
 }
