#include<iostream>
using namespace std;
// NOTE: This lecture is incomplete

// Book Allocation Problem
// n -> size of array
// m-> number of people
// int isAllocationPossible(int arr[], int n, int m, int mid)
// {
//     int ans=INT32_MIN,x=0;
//     int p[m]={0};
//     for (int i = 0; i < n; i++)
//     {
//         // Allocating pages to all the students
//         if (p[x]+arr[i]>mid)
//         {
//             x++;
//         }
//         p[x]+=arr[i];
//         // if more than m students are required
//         if (x>m-1)
//         {
//             return 0;
//         }
//     }
//     // Taking sum of all the allocated paged to all the students
//     for (int i = 0; i < m; i++)
//     {
//         if (ans<p[i])
//         {
//             ans=p[i];
//         }
        
//         // ans+=p[i];
//     }
//     return ans;
// }

// int bookAllocation(int arr[], int n, int m)
// {
//     int s=0,e=0,mid,tmp,ans=INT32_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         e+=arr[i];
//     }
//     while (s<=e)
//     {
//         mid=s+(e-s)/2;
//         tmp=isAllocationPossible(arr,n,m,mid);
//         if (tmp)
//         {
//             e=mid-1;
//             if (tmp<ans)
//             {
//                 ans=tmp;
//             }
//         }
//         else
//         {
//             s=mid+1;
//         }
//     }
//     if (ans==INT32_MAX)
//     {
//         ans=-1;
//     }
//     cout<<"Answer: "<<ans<<endl;
//     return ans;
// }

// Painter's Partition Problem
int isPossible(int arr[],int mid,int n,int m){
    int timetaken[m];
    int j=0,ans=INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (timetaken[j]+arr[i]<=mid)
        {
            timetaken[j]+=arr[i];
        }
        else{
            j++;
        }
        if (j>m-1)
        {
            return 0;
        }
    }  
    for (int i = 0; i < m; i++)
    {
        if (ans<timetaken[i])
        {
            ans=timetaken[i];
        }
    }
    
    return 0;
}

int PainterPartition(int arr[],int n,int m){
    int mid, s=0,e=0,tmp,ans=INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        e+=arr[i];
    }
    while (s<=e)
    {
        mid=s+(e-s)/2;
        tmp=isPossible(arr,mid,n,m);
        if (tmp)
        {
            if (ans>tmp)
            {
                ans=tmp;
            }
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    if (ans==INT32_MAX)
    {
        return -1;
    }
    cout<<ans<<endl;
    // cout<<e<<endl;
    return 0;
}

int main(){
// Book Allocation Problem
    // int arr[]={10,20,30,40};
    // int n=sizeof(arr)/sizeof(int);
    // int m=2;    

    // bookAllocation(arr, n, m);

    int arr[]={5,5,5,5};
    int n=sizeof(arr)/sizeof(int);
    int m=2;
    PainterPartition(arr,n,m);

    return 0;
}