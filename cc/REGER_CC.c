#include <bits/stdc++.h>
using namespace std;
string rgx;
vector<int> p;
bool match(int i, int j, string s) {
    int l = s.length();
    int k = rgx.length();
    if (i == k) return j == l;
    bool result;
    if (p[i]) {
        if (rgx[i] == s[j]) {
            result = match(i + 1, j, s);
            if (!result) result = match(i, j + 1, s);
        } else
            result = match(i + 1, j, s);
    } else {
        if (rgx[i] == s[j])
            result = match(i + 1, j + 1, s);
        else
            result = false;
    }
    return result;
}
int main() {
    string ex, s;
    cout << "Expression: ";
    getline(cin, ex);
    int l = ex.length(), k = 0;
    for (int i = 0; i < l; i++) {
        if (isalpha(ex[i]))
            rgx += ex[i], p.push_back(0), k++;
        else if (ex[i] == '*')
            p[k - 1] = 1;
        else if (ex[i] == '+') {
            rgx += ex[i - 1];
            p.push_back(1);
            k++;
        }
    }
    cout << "Test strings:" << endl;
    while (getline(cin, s)) {
        string result = match(0, 0, s) ? "Accepted" : "Not accepted";
        cout << result << endl;
    }
    return 0;
}
