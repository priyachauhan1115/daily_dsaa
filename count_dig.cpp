#include <iostream>
using namespace std;
class Solution {
public:
    int countDigit(int n) {
        int a=n,c=0;
        while(a>0)
        { a=a/10;
          c++;
        }
        return c;
    }
};
int main() {
    Solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int digitCount = sol.countDigit(n);
    cout << "Number of digits in " << n << " is: " << digitCount << endl;
    return 0;
}