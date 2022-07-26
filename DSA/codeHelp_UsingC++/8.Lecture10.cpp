#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
    return 1;
}

bool swapAlternative(int arr[], int size){
    for (int i = 0; i < size; i+=2)
    {
        if (i + 1 >= size)
        {
            break;
        }
        swap(arr[i], arr[i+1]);
    }
    return 1;
}

bool displayArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 1;
}

bool arrayDuplicate(int arr[], int size){
    // bool flag;
    // for (int i = 0; i < size; i++)
    // {
    //     flag = 0;
    //     for (int j = 0; j < size; j++)
    //     {
    //         if (arr[i] == arr[j] && i!=j)
    //         {
    //             flag = 1;
    //             break;
    //         }
    //     }
    //     if (flag == 1)
    //     {
    //         cout<<"Duplicate elemant: "<<arr[i]<<endl;
    //         break;
    //     }
    // }
    // return 1;
// Above code is of o(n^2)
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        ans ^= i;
    }
    cout<<"Duplicate element is: "<<ans<<endl;
    return 1;
}

// bool arrayUnique(int arr[], int size){
//     bool found = 0;
//     for (int i = 0; i < size; i++)
//     {
//         found = 0;
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[i] == arr[j] && i != j)
//             {
//                 found = 1;
//                 break;
//             }
//         }
//         if (found == 0)
//         {
//             cout<<"Unique Element: "<<arr[i]<<endl;
//             break;
//         }
//     }
//     return 1;
// }
// More optimized above code
bool arrayUnique(int arr[], int size){
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }
    cout<<"Unique Element: "<<ans<<endl;
    return 1;
}

bool arrayMultipleDuplicate(int nums[], int size){
    int j = 0;
    int ans[size];
    int arr[size];
    fill_n(arr, size, 0);
    for (int i = 0; i < size; i++)
    {
        arr[nums[i]]++;
    }
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > 1)
        {
            ans[j] = i;
            j++;
        }
    }
    cout<<"Duplicate values: "<<displayArray(ans, j)<<endl;
    return 1;
}

int arrayIntersection(int arr1[], int arr2[], int n, int m){
    int ans[n];
    int i = 0, j = 0, k = 0;
    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            i++;
            continue;
        }
        if(arr1[i] == arr2[j]){
            ans[k] = arr1[i];
            arr2[j] = -1;
            i++;
            j++;
            k++;
        }
        else{
            j++;
        }
    }
    displayArray(ans, k);

    return 1;
}

void display2DVector(vector<vector<int>> v){
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}

int arrayPairSum(vector<int> &arr, int s){
    int size = arr.size(), i = 0, j = 1;
    vector<vector<int>> ans;
    
    while(i < size - 1){
        if(arr[i] + arr[j] == s){
            vector<int> rans;
            if (arr[i] <= arr[j])
            {
                rans.push_back(arr[i]);
                rans.push_back(arr[j]);
            }
            else{
                rans.push_back(arr[j]);
                rans.push_back(arr[i]);
            }
            ans.push_back(rans);
            j++;
        }
        else if(j == size){
            i++;
            j = i + 1;
        }
        else{
            j++;
        }
    }
    sort(ans.begin(), ans.end());
    display2DVector(ans);
    return 1;
}

void sort012(int arr[], int n){
    // int i=0,j=1,k=0;
    // while (j<n)
    // {
    //     k=0;
    //     if (arr[i] > arr[j])
    //     {
    //         swap(arr[i], arr[j]);
    //         while (arr[i-k] < arr[i-1-k])
    //         {
    //             swap(arr[i-k], arr[i-1-k]);
    //             k++;
    //         }
    //     }
    //     i++;
    //     j++;
    // }
   //   Write your code here
    int left = 0, right = n-1, mid = 0;
    //initialize pointers left should cover 0, right 2 and mid = 1 ideally speaking, now code it out
    while(mid<=right){
        //check for mid value, we are going to play on that, comparing mid with the target value
        if(arr[mid]==1){
            //ideal condition coz mid element needs to be 1, so move ptr
            mid++;
        }
        else if (arr[mid]<1){
            //means the value is 0
            swap(arr[mid], arr[left]);
            left++;
            mid++;
        }
        else{
            // if (a[mid]>1) that is the value equal to 2
            swap(arr[mid], arr[right]);
            right--;	//coz we need to bring right ptr closer and not change anything else
        }
    }

    displayArray(arr, n);
}

int main(){
// Swap the alternate position element in array
    // int arr[] = {6, 2, 4, -1, 3, 9, 80, 7, 0, 5, 8};
    // int size = sizeof(arr)/sizeof(int);
    // displayArray(arr, size);
    // swapAlternative(arr, size);
    // displayArray(arr, size);

// Find unique element in an array
    // int arr[] = {1, 3, 7, 3, 7, 1, 9, 5, 9};
    // int arr[] = {1, 1};
    // int size = sizeof(arr)/sizeof(int);

    // arrayUnique(arr, size);

// Find duplicate in an array
    // int arr[] = {3, 8, 7, 5, 2, 2, 6, 1, 4};
    // int size = sizeof(arr)/sizeof(int);

    // arrayDuplicate(arr, size);

// Find all duplicates in an array
    // int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 7, 5};
    // int arr[] = {1, 1};
    // int size = sizeof(arr)/sizeof(int);

    // arrayMultipleDuplicate(arr, size);
    
    
// Intersection Of Two Sorted Arrays
    // int arr1[] = {1, 2, 2, 3, 4, 4, 5};
    // int arr2[] = {0, 2, 2, 4, 9};

    // int n, m;
    // n = sizeof(arr1)/sizeof(int);
    // m = sizeof(arr1)/sizeof(int);
    
    // arrayIntersection(arr1, arr2, n, m);


// Pair Sum : You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

    // vector<int> arr = {1,2,3,4,5};
    // int n = 5;
    // // vector<int> arr = {2, -3, 3, 3, -2};
    // // int n = 0;

    // arrayPairSum(arr, n);

// Sort 0 1 2

    int arr[] = {0,1,1,2,2,1,1,0,2};
    int size = sizeof(arr)/sizeof(int);
    
    sort012(arr, size);

    return 0;
}