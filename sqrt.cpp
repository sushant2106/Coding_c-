#include<bits/stdc++.h>
using namespace std;
int binary(int n)
{
    int start=1;
    int end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2 ;
        if(mid*mid==n)
        {
            return mid;
        }
        else if(mid*mid>n)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
}
int main()
{
      int n=25;
      cout<<binary(n)<<" ";
    return 0;
}
