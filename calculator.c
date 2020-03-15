#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c;
printf("this is a calculator, created by Nirbhay Parmar.");
printf("Menu:\n");
printf("\nc=1:sum");
printf("\nc=2:difference");
printf("\nc=3:multiplication");
printf("\nc=4:reminder(%)");
print("\nc=5:who is greater");
printf("///////////////////////////////");
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
            else printf("%d is greater than %d",b,a);
    break;
    default:
        printf("operator not valid");

}
    
getch();


}


