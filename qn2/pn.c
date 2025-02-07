#include<stdio.h>
int main()

{
 int num;
 printf("Enter a number:");
 scanf("%d",&num);
 if(num>0)
 {
  printf("%d is greater",num);
 }
 else if(num<0)
 {
 
  printf("%d is smaller",num);
 }
 else 
 {
  printf("It is Zero\n");
  }
  return 0;
  }
