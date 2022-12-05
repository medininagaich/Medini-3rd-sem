#include <stdio.h>
int main(){
int  a[50],size,i,pos;
printf("enter the size of array:");
scanf("%d",&size);
printf("enter the elements of array:");
for(i=0;i<size;i++)
  {scanf("%d",&a[i]);
    }
printf("enter the position which is to be deleted:");
scanf("%d",&pos);
for(i=pos-1;i<size-1;i++){
  a[i]=a[i+1];
  }
  size--;
  printf("elements of array:\n");
  for(i=0;i<size;i++){
printf("%d\n", a[i]);
}
return 0;
}
