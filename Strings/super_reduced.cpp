#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string str){
    // Complete this function
    int len = str.length();
 for(int i = 0; i < len;){
        if(str[i] == str[i+1] && i > -1){
            str.erase(i,2);
            i--;
        }
        else i++;
 }

 if(!str.empty()) return str;
 else return "Empty String";
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}
