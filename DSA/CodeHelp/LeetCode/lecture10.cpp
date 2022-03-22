#include<iostream>
using namespace std;

// Swap altenative in an array

// int main()
// {
//     int a[2] = {1, 2};
//     int size = sizeof(a)/sizeof(int);
//     int tmp, i = 0;
//     while (i < size - 1)
//     {
//         tmp = a[i+1];
//         a[i+1] = a[i];
//         a[i] = tmp;
//         i += 2;
//     }
//     cout << "Reverse Array: " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }


// Find unique element in array (1st approach)

// int main()
// {
//     // int arr[11] = {5, 3, 1, 5, 1, 3, 4, 7, 4, 8, 8};
//     int arr[5] = {1, 2, 3, 2, 1};
//     bool unique = 1;
//     // int tmp[3] = [];

//     for (int i = 0; i < 5; i++)  // You need to manually provide the size of the iteration
//     {                            // which is equal to number of elements in the array
//         unique = 1;
//         for (int j = 0; j < 5; j++)
//         {
//             if(i == j)
//                 continue;
//             if(arr[i] == arr[j])
//             {
//                 unique = 0;
//                 break;
//             }
//         }
//         if(unique == 1)
//             cout << "Found at: " << arr[i] << endl;
//     }
// }


// 2nd approach using XOR Gate

// int main()
// {
//     int size = 5, ans = 0;
//     int arr[size] = {1, 2, 3, 2, 1};
    

//     for (int i = 0; i < size; i++)
//     {
//         ans ^= arr[i];
//     }
//     cout << ans << endl;
    
// }


// Unique number of occurences
// means to find the occurences of all the numbers in an array & compare
// their occurences with each other and return true if all number are
// occured in different numbers

//following is a brute force method and is not 100% completed
// int main()
// {
//     int size = 6, count = 0, arrcount = 0;
//     int arr[size] = {1, 2, 3, 2, 1, 1};
//     int countarr[size] = {};

//     for (int i = 0; i < size; i++)
//     {
//         count = 0;
//         for (int j = 0; j < size; j++)
//         {
//             if(i == j)
//                 continue;
            
//             if(arr[i] == arr[j])
//             {
//                 count++;
//                 countarr[arrcount] += count;
//             }
//         }
//         arrcount++;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << countarr[i] << " ";
//     }
//     cout << endl;
// }