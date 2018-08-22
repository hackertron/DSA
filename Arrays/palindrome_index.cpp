#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string::iterator low, string::iterator high)
{
    while (low < high)
    {
       if (*low != *high)
          return false;
       low++;
       high--;
    }
    return true;
}
 


int palindromeIndex(string str) {
int low = 0, high = str.length() - 1;
 
   
    while (low < high)
    {
       
        if (str[low] == str[high])
        {
            low++;
            high--;
        }
        else
        {
            
            if (isPalindrome(str.begin() + low + 1, str.begin() + high))
                return low;
 
            if (isPalindrome(str.begin() + low, str.begin() + high - 1))
                return high;
 
           
        }
    }
     return -1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
