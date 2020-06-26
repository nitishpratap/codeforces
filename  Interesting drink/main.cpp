#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int binarySearch(long long  arr[],long long  n,long long  data)
{
 long    long  l=0,r=n-1;
    while(l<=r)
    {
        long  mid=l+(r-l)/2;
        if(data==arr[mid])
            return mid+1;

        else if(arr[mid]>data)
        {
            r=mid-1;

        }
        else
            l=mid+1;
    }
    return l;
}
int main()
{
   long long   n;
   cin>>n;
   long long   arr[n];
   for(long long  i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);
   n=sizeof(arr)/sizeof(arr[0]);
   /*for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";*/
   int  q;
   cin>>q;
   while(q--)
   {
       long   m;
       cin>>m;
       //int arr2[]={1,2,3,4,5,6,7,8,9};
      // cout<<binarySearch(arr,n,m)<<"\n";
       cout<<upper_bound(arr,arr+n,m)-arr<<"\n";
   }
}
