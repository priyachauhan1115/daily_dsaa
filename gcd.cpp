#include <iostream>
using namespace std;

class Solution {
public:
    int GCD(int n1, int n2) {
        while (n1 > 0 && n2 > 0) {
            if (n1 > n2)
                n1 = n1 % n2;
            else
                n2 = n2 % n1;
        }

        if (n1 == 0)
            return n2;
        return n1;
    }
};
int main() {
    Solution sol;
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    int gcd = sol.GCD(n1, n2);
    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;
    return 0;
}
