#include <iostream>
using namespace std;
class Solution {
public:
    bool isArmstrong(int n) {
        int arm=0,a,temp=n;
        while(n>0)
        { a=n%10;
          arm=arm+(a*a*a);
          n=n/10;
          }
        if(arm==temp)
        {return true;}
        else
         return false;
    }
};
int main() {
    Solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool isArmstrongNumber = sol.isArmstrong(n);
    if (isArmstrongNumber) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}