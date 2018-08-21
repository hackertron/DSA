#include <bits/stdc++.h>
#define NO_OF_CHARS 256
using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string str) {

    // Create a count array and initialize all
    // values as 0
    int count[NO_OF_CHARS] = { 0 };
 
    // For each character in input strings,
    // increment count in the corresponding
    // count array
    for (int i = 0; str[i]; i++)
        count[str[i]]++;
 
    // Count odd occurring characters
    int odd = 0;
    for (int i = 0; i < NO_OF_CHARS; i++) {
        if (count[i] & 1)
            odd++;
 
        if (odd > 1)
            return "NO";
    }
 
    // Return true if odd count is 0 or 1,
    return "YES";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
