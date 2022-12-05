#include<stdio.h>
#include<math.h>
int linearsearch(int a[],int x,int n){
  for(int i=0;i<n;i++){
  if(a[i]==x)
   return i;
    }
  return 0;
}
int binarysearch(int a[],int x,int start,int end){
 {
   while (start <= end){
      int mid = start + (end- start)/2;
      if (a[mid] == x)
         return mid;
      if (a[mid] < x)
         start = mid+ 1;
      else
         end = mid - 1;
   }
   return -1;
}
}
int ternarysearch(int a[],int x,int i,int j){
while (i <= j) {
        int mid1 = j + (i - j) / 3;
        int mid2 = i - (i - j) / 3;
        if (a[mid1] == x) {
            return mid1;
        }
        if (a[mid2] == x) {
            return mid2;
        }
        if (x < a[mid1]) {
            i = mid1 - 1;
        }
        else if (x > a[mid2]) {
            j= mid2 + 1;
        }
        else {
            j = mid1 + 1;
            i = mid2 - 1;
        }
    }
    return -1;
}
int min(int a, int b){
    if(b>a)
      return a;
      else
      return b;
}
int jumpsearch(int a[], int x, int n)
{
  int step = sqrt(n);
  int prev = 0;
    while (a[min(step, n)-1] < x)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
   while (a[prev] < x)
    {
        prev++;
      if (prev == min(step, n))
            return -1;
    }
  if (a[prev] == x)
        return prev;
 
    return -1;
}
int interpolationsearch(int a[],int x,int low,int high){
    int pos;
   if (low <= high && x >= a[low] && x <= a[high])
   {
      pos = low+ (((double)(high - low) / (a[high] - a[low]))
                 * (x - a[low]));
     if (a[pos] == x)
            return pos;
      if (a[pos] < x)
            return interpolationsearch(a, pos + 1, high, x);
     if (a[pos] > x)
            return interpolationsearch(a, low, pos - 1, x);
    }
    return -1;
}
int exponentialsearch(int a[], int n, int x)
{
  if (a[0] == x)
        return 0;
  int i = 1;
    while (i < n && a[i] <= x)
        i = i*2;
  return binarysearch(a, x,i/2, 
                            min(i, n-1));
}
int main(){
  int a[7]={15,23,34,46,57,64,78};
  int n=sizeof (a)/sizeof (a[0]);
  int y=exponentialsearch(a,7,34);
  if(y==-1){
    printf("element is not found ");
  }
  else{
    printf("element is found at %d",y);
  }
  return 0;
}
