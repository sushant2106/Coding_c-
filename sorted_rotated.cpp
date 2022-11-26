#include<bits/stdc++.h>
using namespace std;

int pivot(int arr[],int start,int end)
{
   
    int mid;
    while(start<end)
    {
         mid=start+(end-start)/2;
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
    }
    return start;
}
int binary(int arr[],int start,int end,int key)
{       
      while(start<=end)
      {
          int mid=start+(end-start)/2 ;
          if(arr[mid]==key)
          {
              return mid;
          }
          if(arr[mid]>key)
          {
              end=mid-1;
          }
          else
          {
              start=mid+1;
          }
      }
      return -1;
    
}
 int search(int arr[], int l, int h, int key){
        int index=pivot(arr,l,h);
        if(key>=arr[index] && key<=arr[h])
        {
            return binary(arr,index,h,key);
        }
        else
        {
            return binary(arr,l,index-1,key);
        }
        return -1;
       
    }
