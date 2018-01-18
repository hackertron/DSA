/*
find last occurance on int in a given input a.ka. linear search 

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    long int m , z;
    cin>>n>>m;
    int pos = -1;
    vector<long int> arr;
    while(cin >> z)
    {
        arr.push_back(z);
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == m)
        {
            pos = i;
        }
    }
    
    cout<<pos+1;
}
    
