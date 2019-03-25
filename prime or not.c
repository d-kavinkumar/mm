#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,k=0;
scanf("%d",&n);
for(i=2;i<n;i++)
{
    if(n%i==0)
        ++k;
}
if(k==0)
    printf("prime number");
else
    printf("not a prime number");
getch();
}
