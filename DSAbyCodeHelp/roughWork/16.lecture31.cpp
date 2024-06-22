#include<iostream>
using namespace std;
// Factorial
int fact(int n){
  if(n==0){
    return 1;
  }
  return n * fact(n-1);
}
// Fibonnacci Series by ME
void fibo(int num, int count=0, int first=0, int second=1){
  if(count==0){
    cout<<first<<" "<<second<<" ";
    count=2;
  }
  if(count==num){
    cout<<endl<<"Fibonnacci Num: "<<second<<endl;
    return;
  }
  int third = first + second;
  cout<<third<<" ";
  fibo(num, count+1, second, third);
}
// Standard Fibonnacci Series
int fib(int n){
  if(n==0)
    return 0;
  if(n==1)
    return 1;

  return fib(n-1)+fib(n-2);
}

bool isSorted(int* arr, int size, int start){
  if(arr[start + 1]<arr[start])
    return false;
  if(arr[start]==arr[size-1]){
    return true;
  }
  
  return isSorted(arr, size, start+1);
}

int getSum(int* arr, int size){
  if(size==0){
    return 0;
  }
  int sum = 0;
  sum=arr[0]+getSum(arr+1, size-1);

  return sum;
}
// Linear Search
int lSearch(int* arr, int size, int key, int index=0){
  if(index>=size){
    return -1;
  }
  if(arr[index]==key){
    return index;
  }

  return lSearch(arr, size, key, index+1);
}

// Binary Search
int bSearch(int* arr, int size, int key, int front, int rear, int mid=0){
  if(front>rear){
    return -1;
  }
  mid=front + (rear-front)/2;
  if(arr[mid]==key){
    return mid;
  }
  else if(arr[mid]>key){
    return bSearch(arr, size, key, front, mid-1);
  }
  else{
    return bSearch(arr, size, key, mid+1, rear);
  }
}

int main(){
  /* Code Here */
  cout<<fact(6)<<endl;

  // Fibonnacci Series
  fibo(9);
  cout<<fib(5)<<endl;

  // Sorted array or not
  int arr[] = {2, 5, 6, 7, 7, 10, 15};
  int size = sizeof(arr)/sizeof(int);
  cout<<"Sorted: "<<isSorted(arr, (sizeof(arr)/sizeof(int)), 0)<<endl;

  // Sum of elements of array
  cout<<"SUM of array: "<<getSum(arr, size)<<endl;

  // LInear Search
  cout<<"Found at Index: "<<lSearch(arr, size, 5)<<endl;

  // Binary Search
  cout<<"Found at Index: "<<bSearch(arr, size, 115, 0, size-1)<<endl;
  

  return 0;
}
