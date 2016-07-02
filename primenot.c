#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,count=0;
clrscr();
printf("Enter the number");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
if(n%i==0)
count++;
if((count==0)&&(n!=1))
printf("prime number");
else
printf("not a prime");
getch();
}
