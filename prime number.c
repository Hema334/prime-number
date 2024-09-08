/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdio.h>
#include<math.h>
void main()
{
 int n,count=0,i;
 printf("enter the number:");
 scanf("%d",&n);
 if(n==0||n==1)
 {
     printf("it is not a prime number");
 }
 else
 {
     for(i=1;i<=n;i++)
     {
     if(n%i==0)
     count++;
 }
 }
 if(count==2)
 {
     printf("it is a prime number") ;
 }
}