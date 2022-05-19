#include<stdio.h>
void swap(int *pA,int *pB);
int main()
{
int a,b;
printf("Enter the number to print:");
scanf("%d %d ",&a,&b);
swap(&a,&b);
printf("a=%d,b=%d",a,b);
}
void swap(int *pA,int *pB)
{
int temp;
temp=*pA;
*pA=*pB;
*pB=temp;
}



