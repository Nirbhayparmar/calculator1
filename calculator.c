#include<stdio.h>
#include<conio.h>

void main()



{
int a,b,c,OFF;
printf("this is a calculator, created by Nirbhay Parmar.");
printf("\nYou have to enter two number 'a' and 'b'. ");
printf("\nThen use this given menu to select your operation.");

for(;;)
{
printf("\nMenu:\n");
printf("\nc=1:sum");
printf("\nc=2:difference");
printf("\nc=3:multiplication");
printf("\nc=4:reminder(%)");
printf("\nc=5:who is greater");
printf("\n_________________________________________________________");
printf("\nenter value of a:");
scanf("%d",&a);
printf("\nenter value of b:");
scanf("%d",&b);
printf("\nenter value of c:");
scanf("%d",&c);
switch(c)
{
    case 1: printf("sum of a and b is: %d",a+b);
    break;
    case 2: printf("difference of a and b is: %d",a-b);
    break;
    case 3: printf("multiplication of a and b is: %d",a*b);
    break;
    case 4: printf("reminder when we divide a by b is:%d",a%b);
    break;
    case 5: if(a>b)
               printf("%d is greater than %d",a,b);
            else if(a<b)
                    printf("%d is greater than %d",b,a);
                  else printf("%d is equal to %d",a,b);
    break;
    default:
        printf("\noperator not valid");

}
 printf("\ntype (1) if you want to use calculator again otherwise to close the calculator type (0) ");
 scanf("%d",&OFF);
 if(OFF==0)
    break;


}
printf("\nthank you for using my calculator\n\npress any key to exit");
getch();
}



