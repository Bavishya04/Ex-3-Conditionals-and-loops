#include<stdio.h>
int main()
{
int n1,n2;
char op;
printf("Enter n1:");
scanf("%d",&n1);
printf("Enter n2:");
scanf("%d",&n2);
printf("Enter op:");
scanf(" %c",&op);
switch(op)
{
   case '+':
    printf("Result:%d",n1+n2);
    break;
   case '-':
    printf("Result:%d",n1-n2);
    break;
   case '*':
    printf("Result:%d",n1*n2);
    break;
   case '/':
    printf("Result:%d",n1/n2);
    break;
   default:
    printf("Invalid");
    break;
}
return 0;
}
