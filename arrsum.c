#include<stdio.h>
int main()
{
 int a[4],sum=0,i;
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<5;i++)
 {
  sum=sum+a[i];
 }
printf("Avgerage of given numbers is %d",sum/5);
return 0;
}
