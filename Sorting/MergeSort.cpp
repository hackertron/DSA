#include<iostream>
using namespace std;

void merge(int left[],int right[], int ar[],int nl,int rl)
{
    //int nl = left.length();
   // int rl = right.length();
    int i ,j, k ;
        i = j = k = 0;
    while(i < nl &&  j < rl)
    {
        if(left[i] <= right[j])
        {
            ar[k] = left[i];
            ++i;
        }
        else
        {
            ar[k] = right[j];
            ++j;
        }
        ++k;
    }
    while( i < nl)
    {
        ar[k] = left[i];
        ++i;
        ++k;
    }
    while(j < rl)
    {
        ar[k] = right[j];
        ++j;
        ++k;
    }
}

void mergesort(int ar[], int n)
{
    if(n < 2)
    {
        return;
    }

        int mid = n / 2;
        int left[mid];
        int right[n-mid];
        for(int i = 0 ; i < mid; i++)
        {
            left[i] = ar[i];
            cout<<"left : "<<left[i]<<"\n";
        }

        for(int i = mid,j=0 ; i < n; i++,j++)
        {
            right[j] = ar[i];
            cout<<"right : "<<right[j]<<"\n";
        }

        mergesort(left,mid);
        mergesort(right,(n-mid));
        merge(left,right,ar,mid,n-mid);

}

int main()

{

    int size;
    cout<<"enter the size of list \n";
    cin>>size;
    int ar[size];
    for(int i = 0; i < size; i++)
    {
        cout<<"enter "<<i<<"st element : \n";
        cin>>ar[i];
    }
    mergesort(ar,size);
    cout<<"sorted array is : \n";
    for(int i = 0 ; i < size; i++)
    {
        cout<<ar[i]<<"\n";
    }

    return 0;
}
