#include<iostream>
using namespace std;

void occurrencesIndex(int arr[], int size, int k){
    int lower = INT32_MAX, high = INT32_MIN, left = 0, right=size-1, mid;
// Find lower index
    while (left<=right)
    {
        mid = left + (right - left)/2;
        if (k == arr[mid])
        {
            if (lower > mid)
            {
                lower = mid;
            }
            right = mid - 1;
        }
        else if (k < arr[mid])
        {
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
// find higher index
    left = 0, right=size-1;
    while (left<=right)
    {
        mid = left + (right - left)/2;
        if (k == arr[mid])
        {
            if (high < mid)
            {
                high = mid;
            }
            left = mid + 1;
        }
        else if (k < arr[mid])
        {
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    if (lower==INT32_MAX && high==INT32_MIN)
    {
        lower=-1;
        high=-1;
    }
    
    cout<<"Lower: "<<lower<<endl;
    cout<<"Higher: "<<high<<endl;
    return;
}

int mountainArray(int arr[], int size){
    // int arr[]={1,2,3,4,5,4,3,1};
//     int left = 0, right = size - 1, mid, max = 0, flag = 1;
//     while(left <= right){
//         mid = left + (right - left)/2;
//         if(arr[mid] >= arr[max]){
//             max = mid;
//             if (flag == 1)
//             {
//                 left = mid + 1;
//             }
//             else{
//                 right = mid - 1;
//             }
//         }
// // Left Array
//         else if(arr[mid] < arr[max] && arr[mid] < arr[mid + 1]){
//             left = mid + 1;
//             flag = 1;
//         }
// // Right Array
//         else if(arr[mid] < arr[max] && arr[mid] > arr[mid + 1]){
//             right = mid - 1;
//             flag = 0;
//         }
//         cout<<mid<<" "<<max<<endl;
//         cout<<arr[mid]<<" "<<arr[max]<<endl;
//     }
//     cout<<"Max Number: "<<arr[max]<<endl;
//     return 1;
    int left = 0, right = size-1, mid, max = 0;
    while (left < right-1)
    {
        mid = left+(right-left)/2;
        if (arr[max] < arr[mid])    // not required in 2nd approach
        {
            max = mid;
        }
        if (arr[mid] < arr[mid+1])
        {
            left = mid;
            // left = mid+1;    // 2nd approach
        }
        else if (arr[mid] > arr[mid+1])
        {
            right = mid;
            // right = mid;   // 2nd approach
        }
        cout<<arr[left]<<" "<<arr[right]<<endl;
        cout<<arr[max]<<endl;
    // 2nd approach: following is also right and 1st if block will also be not required
        // cout<<arr[right]<<endl;
    }
    return 1;
}

int arrayPivot(int arr[], int size){
    int left=0, right=size-1, mid;
    while (left<right)
    {
        mid=left+(right-left)/2;
        if (arr[mid]>arr[0])
        {
            left=mid+1;
        }
        else if (arr[mid]<arr[0])
        {
            right=mid;
        }
    }
    cout<<"Pivot at index: "<<right<<" at value: "<<arr[right]<<endl;

    return 1;
}

int searchBinaryRotated(int arr[], int size, int k){
    int left=0, right=size-1, mid;
    while(left<right){
        mid=left+(right-left)/2;
        if(arr[mid]>=arr[0]){
            left=mid+1;
        }
        else{
            right=mid;
        }
    }
    int pivot=right;
    cout<<"PIVOT: "<<pivot<<endl;
    // cout<<right<<" "<<left<<endl;
    if(k>arr[0]){
        // upper values
        left=0;
        right-=1;
    }
    else if(k<arr[0]){
        // left is unchanged
        right=size-1;
    }
    else{
        cout<<"Found: "<<0<<endl;
        return 0;
    }
    // from hereon simple binary search
    while(left<=right){
        mid=left+(right-left)/2;
        if(arr[mid]==k){
            // return mid;
            cout<<"Found: "<<mid<<endl;
            return 0;
        }
        else if(arr[mid]>k){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return -1;
}

void squareRootBinaryFloorValue(long long int num){
    long long int left=0, right=num;
    long long int mid, ans=-1;

    while (left<=right)
    {
        mid=left+(right-left)/2;
        long long unsigned int sq=mid*mid;
        if (sq==num)
        {
            cout<<mid<<endl;
            return;
        }
        else if (sq<num)
        {
            ans=mid;
            left=mid+1;
        }
        
        else
        {
            right=mid-1;
        }
        cout<<left<<" "<<right<<endl;
    }
    cout<<ans<<endl;
    return;
}


// Square Root Using Binary Search with upto 2 precision decimal points
// To get more optimized code refer to DSA course Lecture 14 by Love Babbar
long double squareRoot2PrecisionDigits(long long int num, long double n){
    long double ans, sq;
    // n+=0.1;
    for (int i = 0; i < 10; i++)
    {
        n+=0.1;
        sq=n*n;
        if (sq==num)
        {
            cout<<"Perfect Precesion Square Root: "<<n<<endl;
            return n;
        }
        else if (sq<num)
        {
            ans=n;
        }
        else{
            cout<<"1st Floor Precesion Square Root: "<<ans<<endl;
            n=ans;
            for (int i = 0; i < 10; i++)
            {
                n+=0.01;
                sq=n*n;
                if (sq==num)
                {
                    cout<<"Perfect Precesion Square Root: "<<n<<endl;
                    return n;
                }
                else if (sq<num)
                {
                    ans=n;
                }
                else{
                    cout<<"2nd Floor Precesion Square Root: "<<ans<<endl;
                    return ans;
                }
            }
            // return ans;
        }
    }
    // n+=0.01
    
    return -1;
}

void squareRootBinaryPrecision(long long unsigned int num){
    long long unsigned int left=0, right=num;
    long long unsigned int mid, ans=-1, sq;
    while (left<=right)
    {
        mid=left+(right-left)/2;
        sq=mid*mid;
        if (sq==num)
        {
            cout<<"Perfect Square Root: "<<mid<<endl;
            return;
        }
        else if (sq<num)
        {
            ans=mid;
            left=mid+1;
        }
        else{
            right=mid-1;
        }
        // cout<<left<<" "<<right<<endl;
    }
    cout<<"Floor Square Root: "<<ans<<endl;
    squareRoot2PrecisionDigits(num, ans);
}

int main(){
// Find the lowest and highest index of an element in an array
    // int arr[]={0,1,1,1,2,3,3,3,3,3,4,4};
    // int size = sizeof(arr)/sizeof(int);

    // occurrencesIndex(arr, size, 3);

// Peak index in a Mountain Array
    // int arr[]={1,2,3,4,5,6,10,4,3,1};
    // int size = sizeof(arr)/sizeof(int);
    
    // mountainArray(arr, size);

    // int arr[]={7,9,10,11,20,55,2};
    // int size=sizeof(arr)/sizeof(int);

    // arrayPivot(arr, size);

// Search in rotated sorted array
    // int arr[]={7,9,10,11,20,2,5};
    // int size=sizeof(arr)/sizeof(int);
    // int num=11;

    // searchBinaryRotated(arr, size, 7);

// Find square root of Number using binary search for logn complexity

    long long int num = 30;
    // long long int num = 7777777772;
    // long long int num = 9999999999;
    // squareRootBinaryFloorValue(num);

    squareRootBinaryPrecision(num);

    return 0;
}