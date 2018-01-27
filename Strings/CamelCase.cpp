#include <bits/stdc++.h>

using namespace std;

int camelcase(string s) {
    // Complete this function
    int i = 0;
    int count = 1;
    while(i < s.length())
    {
        if(isupper(s[i]))
        {
            ++count;
            i++;
        }
        else
        {
            i++;
        }
    }
    return count;
}

int main() {
    string s;
    cin >> s;
    int result = camelcase(s);
    cout << result << endl;
    return 0;
}
