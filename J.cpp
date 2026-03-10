#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

vector<int> LPS(const string& pattern) {
    int m = pattern.size();
    vector<int> lps(m, 0);
    int len = 0; // length of the previous longest prefix suffix
    int i = 1;

    while (i < m) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

ll KMP(const string& text, const string& pattern) {
    vector<int> lps = LPS(pattern);
    vector<int> occurrences;
    int n = text.size();
    int m = pattern.size();
    int i = 0; // index for text
    int j = 0; // index for pattern

    while (i < n) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
        }
        if (j == m) {
            occurrences.push_back(i - j); // Pattern found at index (i - j)
            j = lps[j - 1]; // Continue to search for the next match
        } else if (i < n && text[i] != pattern[j]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    return occurrences.size();
}

signed main(){
    string input; cin >> input;
    ll ans = 0;

    ans += KMP(input, "ha");
    ans -= KMP(input, "boooo");
    ans += KMP(input, "bravo") * 3;

    cout << ans << endl;

    return 0;
}
