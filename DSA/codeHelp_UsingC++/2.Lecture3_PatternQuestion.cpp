#include<iostream>
using namespace std;

// int main(){
//     int i = 1,j,n;
//     cout<<"Enter number: "<<endl;
//     cin>>n;
//     while (i<=n)
//     {
//         j = 1;
//         while (j<=n)
//         {
//             cout<<j<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// int main(){
//     int i = 0, j = 1, n, l = 0;
//     cout<<"Enter number: "<<endl;
//     cin>>n;
//     while (i < n)
//     {
//         l = 0;
//         while (l < n)
//         {
//             cout<<j<<" ";
//             j++;
//             l++;
//         }
//         cout<<endl;
//         i++;
//     }
    

//     return 0;
// }

// int main(){
//     int n, i = 0, j;
//     cout<<"Enter number: "<<endl;
//     cin>>n;
//     while (i < n)
//     {
//         j = 0;
//         while (j <= i)
//         {
//             cout<<"*"<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
    
    
//     return 0;
// }


// int main(){
//     int i = 0,j , n;
//     char ch;
//     cout<<"Enter number: "<<endl;
//     cin>>n;
//     while (i < n)
//     {
//         j = 0;
//         while (j < n)
//         {
//             ch = 'A' + i;
//             cout<< ch <<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
    

//     return 0;
// }


// int main(){
//     int i = 0, j, n;
//     n = 7;
//     char ch = 'A';
//     while (i < n)
//     {
//         j = 0;
//         while (j < n)
//         {
//             cout<<ch<<" ";
//             ch += 1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//         ch -= n - 1;
//     }
    

//     return 0;
// }



// int main(){
//     int i = 0, j, n;
//     char ch;
//     n = 5;
//     while (i < n)
//     {
//         j = 0;
//         while (j <= i)
//         {
//             ch = 'A' + n - 1 - i + j;
//             cout<<ch<<" ";
//             j++;
//         }
//         // ch = 'A' + 3 - j;
//         cout<<endl;
//         i++;
//     }
    
//     return 0;
// }



// int main(){
//     int i = 0, j, n;
//     n = 4;
//     while (i < n)
//     {
//         j = 1;
//         while (j < n - i)
//         {
//             cout<<" "<<" ";
//             j++;
//         }
//         j = 0;
//         while (j <= i)
//         {
//             cout<<"*"<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
    
//     return 0;
// }



// int main(){
//     int row = 1, col, n, size;
//     n = 8;

//     while (row <= n)
//     {
//         col = 1;
//         size = n - row;
//         while (size)
//         {
//             cout<<" "<<" ";
//             size -= 1;
//         }
//         while (col <= row)
//         {
//             cout<<col<<" ";
//             col++;
//         }
//         col -= 2;
//         while (col >= 1)
//         {
//             cout<<col<<" ";
//             col--;
//         }
//         cout<<endl;
//         row++;
//     }
    
//     return 0;
// }



int main(){
    int row = 1, col, n, tail;
    n = 5;

    while (row <= n)
    {
        // first triangle
        col = 1;
        tail = n - row + 1;
        while (col <= tail)
        {
            cout<<col<<" ";
            col++;
        }
        // second triangle
        col = 1;
        tail = (row - 1)*2;
    
        while (col <= n)
        {
            while (tail)
            {
                cout<<"*"<<" ";
                tail--;
            }
            col++;
        }
        // third triangle
        col = n - row + 1;
        while (col >= 1)
        {
            cout<<col<<" ";
            col--;
        }
        
        cout<<endl;
        row++;
    }
    
    return 0;
}



// int main(){


//     return 0;
// }