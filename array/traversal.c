#include<stdio.h>
int main()
{
int a[10],size,i;
printf("enter the size of array:");
scanf("%d", &size);
printf("enter the elements of array:");
for(i=0;i<size;i++)
{
  scanf("%d",&a[i]);
}
printf("elements of array:\n");
  for(i=0;i<size;i++)
{
printf("%d\n", a[i]);
}
  return 0;
}
