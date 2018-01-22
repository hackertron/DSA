#include <iostream>
#include <vector>
using namespace std;

vector<int> array_left_rotation(vector<int> a, int n, int k) {
    for(int i = 0; i < k; i++)
    {
        int temp = a[0];
        for(int  j = 0; j < n-1; j++)
        {
            a[j] = a[j+1];            
        }
        a[n-1] = temp;
    }
    return a;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}
