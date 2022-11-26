#include<bits/stdc++.h>
using namespace std;
int pivot(int arr[],int n)
{
    int start=0;
    int end=n-1;
    int mid;
    while(start<end)
    {
         mid=(start+(end-start)/2);
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
    }
    return start;//start and end are both pointing on same min element
}
int main()
{
    int n=5;
    int arr[n]={7,9,1,2,3};
    cout<<pivot(arr,n);
    return 0;
}
    
