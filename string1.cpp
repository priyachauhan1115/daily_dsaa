#include<bits/stdc++.h>
using namespace std;
bool comparestrings(const string &a, const string &b) {
    if (a.length() != b.length())
        return false;
    for (size_t i = 0; i < a.length(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}
int main() {
    string a,b;
    cin>>a>>b;
    if (comparestrings(a, b))
        cout << "Strings are equal\n";
    else
        cout << "Strings are not equal\n";
}