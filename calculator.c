#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c;
printf("\nenter value of a:");
scanf("%d",&a);
printf("\nenter value of b:");
scanf("%d",&b);
printf("\nc=1:sum");
printf("\nc=2:difference");
printf("\nc=3:multiplication");
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
    default :
        printf("operator not valid");

}
getch();


}


