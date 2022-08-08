#include<iostream>
using namespace std;
// Book Allocation Problem
// n -> size of array
// m-> number of people
int isAllocationPossible(int arr[], int n, int m, int mid)
{
    int ans=INT32_MIN,x=0;
    int p[m]={0};
    for (int i = 0; i < n; i++)
    {
        // Allocating pages to all the students
        if (p[x]+arr[i]>mid)
        {
            x++;
        }
        p[x]+=arr[i];
        // if more than m students are required
        if (x>m-1)
        {
            return 0;
        }
    }
    // Taking sum of all the allocated paged to all the students
    for (int i = 0; i < m; i++)
    {
        if (ans<p[i])
        {
            ans=p[i];
        }
        
        // ans+=p[i];
    }
    return ans;
}

int bookAllocation(int arr[], int n, int m)
{
    int s=0,e=0,mid,tmp,ans=INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        e+=arr[i];
    }
    while (s<=e)
    {
        mid=s+(e-s)/2;
        tmp=isAllocationPossible(arr,n,m,mid);
        if (tmp)
        {
            e=mid-1;
            if (tmp<ans)
            {
                ans=tmp;
            }
        }
        else
        {
            s=mid+1;
        }
    }
    if (ans==INT32_MAX)
    {
        ans=-1;
    }
    cout<<"Answer: "<<ans<<endl;
    return ans;
}

int main(){
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(int);
    int m=2;    

    bookAllocation(arr, n, m);
    return 0;
}