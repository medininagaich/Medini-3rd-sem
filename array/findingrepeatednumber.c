#include<stdio.h>
int main()
{
  int a[50],size,i,n,count=0;
  printf("enter the size of array:");
  scanf("%d",&size);
  printf("enter the elements of array:");
  for(i=0;i<size;i++){
    scanf("%d",&a[i]);
    }
  printf("enter the element to be checked:");
  scanf("%d",&n);
  printf("result:\n");
  for(i=0;i<size;i++)
    a[i]=n;
    count=count+1;
  if(count>=2) {
      printf("element is repeated");
      }
  else{
    printf("element is not repeated");
      }
  return 0;
}
