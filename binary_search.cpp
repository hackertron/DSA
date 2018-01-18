#include<iostream>
#include<algorithm>
using namespace std;

long int binarySearch(long int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        long int mid = l + (r - l)/2;
 
        // If the element is present at the middle 
        // itself
        if (arr[mid] == x)  
            return mid;
 
        // If element is smaller than mid, then 
        // it can only be present in left subarray
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid-1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid+1, r, x);
   }
 
   // We reach here when element is not 
   // present in array
   return -1;
}
 
int main()
{
    long int n, q;
    cin>>n;
    long int arr[n];
    
    for(int i = 0 ; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    
    cin>>q;
    for(int i = 0 ; i < q; i++)
    {
        int key ;
        cin>>key;
        long int result = binarySearch(arr, 0, n, key);
        cout<<result+1<<endl;
    }
    
    
}
  
