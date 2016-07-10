# hunt1
#include<stdio.h>
int main()
{
  int arr[5]={1,3,4,1,5},size;
  size=sizeof(arr)/sizeof(arr[0]);
  for(ctr=0;ctr<=size;ctr++)
  {
   for(ctr1;ctr1<size;ctr1++)
   {
    if(arr[ctr]==arr[ctr1])
      arr[ctr]==0;
   }
  }
}
