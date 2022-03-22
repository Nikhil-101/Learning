#include<iostream>
using namespace std;


// Binary Search
void binarySearch(int arr[], int key, int size)
{
    int head = 0, tail = size - 1, mid = tail/2;
    while(tail >= head)
    {
        if(arr[mid] == key)
        {
            cout << "Found: " << arr[mid] << " at position: " << mid + 1 << endl;
            break;
        }
        else if (arr[mid] < key)  
        {
            head = mid + 1;
        }
        else if (arr[mid] > key) 
        {
            tail = mid - 1;
            
        }
        // if(head > tail)
        // {
        //     cout << "Not Found: " << key << endl;
        //     break;
        // }
        mid = head + (tail - head)/2;
    }
}

int main()
{
    int size = 13;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15, 20, 25};
    
    for (int i = 0; i < 26; i++)
    {
        binarySearch(arr, i, size);
    }
}
