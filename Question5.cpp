// Check if the given array is almost sorted. (elements are at-most one position away)
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool check(int arr[],vector<int>&v)
{
    int n= v.size();
     for(int i=0;i<n;i++)
    {
        if(i==0&& (v[i]!=arr[i+1])&&(v[i]!=arr[i]))
        {
            return false;
        }
        else if(i==n-1&&(v[i]!=arr[i])&&(v[i]!=arr[i-1]))
        {
            return false;
        }
        else if((v[i]!=arr[i])&&(v[i]!=arr[i-1])&&v[i]!=arr[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[6]={1,4,2,3,6,5};//1,2,3,4,5,6
    int n =sizeof(arr)/sizeof(arr[0]);
  
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        v[i]=arr[i];
    }
      sort(arr,arr+n);
   
    bool flag = check(arr,v);
    if(flag==true)
    {
        cout<<"Array element is almost sorted"<<endl;
    }
    else
    {
        cout<<"NOT almost sorted";
    }
    cout<<flag<<endl;

}
