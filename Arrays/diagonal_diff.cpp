#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector < vector<int> > a) {
    // Complete this function
    int l_d = 0 ; 
    int r_d = 0 ;
    int size = a.size();
    for(int i = 0; i < size; i++)
    {
        l_d = l_d + a[i][i];
        r_d = r_d + a[i][size -i -1];
    }
    return abs(l_d - r_d);
}

int main() {
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    int result = diagonalDifference(a);
    cout << result << endl;
    return 0;
}
