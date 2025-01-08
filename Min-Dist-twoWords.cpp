#include <bits/stdc++.h>
using namespace std;

// Find the minimum distance between two words
int main() {
    vector<string> str = {"geeks", "for", "geeks", "contribute", "practice"};
    string a = "geeks";
    string b = "practice";
    
    int ans = INT_MAX;
    int t1 = -1; 
    int t2 = -1; 
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == a) {
            t1 = i;
        } 
        else if (str[i] == b) {
            t2 = i;
        }
        if (t1 != -1 && t2 != -1) {
            ans = min(ans, abs(t1 - t2));
        }
    }
    cout << "Minimum distance: " << ans << endl;
    return 0;
}
