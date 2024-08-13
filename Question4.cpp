// Sort the array in descending order using Bubble Sort.
//    int arr[6]={4,2,7,1,8,3};
//In first traversing of loop  4,7,2,8,3,1;
// in second traversing of loop = 7,4,8,3,2,1;
#include<iostream>
using namespace std;
int main()
{
    int arr[6]={4,2,7,1,8,3};
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++)
    {
        bool flag =false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(flag==false)
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}