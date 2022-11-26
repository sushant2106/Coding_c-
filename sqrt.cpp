#include<bits/stdc++.h>
using namespace std;
// int binary(int n)
// {
//     int start=1;
//     int end=n-1;
//     while(start<=end)
//     {
//         int mid=start+(end-start)/2 ;
//         if(mid*mid==n)
//         {
//             return mid;
//         }
//         else if(mid*mid>n)
//         {
//             end=mid-1;
//         }
//         else
//         {
//             start=mid+1;
//         }
//     }
// }
// int main()
// {
//       int n=25;
//       cout<<binary(n)<<" ";
//     return 0;
// }
  long long int binarysearch(int num)
    {
        long long int start=0;//beacuse if the number range is high
       long long int  end=num;
        int ans=-1;
    while(start<=end)
    {
          long long int mid=start +(end-start)/2 ;
        if((mid*mid)==num)
        {
         return mid;
        }
        else if((mid*mid)>num)
        {
          end=mid-1;
        }
        else if((mid*mid)<num)
        {
          ans=mid;
          start=mid+1;
        }
  
    
    }
   return ans; 
    }
    long long int floorSqrt(long long int x) 
    {
        return binarysearch(x);
    }
};
