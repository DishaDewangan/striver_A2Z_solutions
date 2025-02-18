#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        int orig = x;
        long rev = 0;
        while (x != 0) {
            int ld = x % 10;
            rev = (rev * 10) + ld;
            x = x / 10;
        }
        if (rev == orig && orig >= 0) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Solution sol;
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;

    bool result = sol.isPalindrome(x);
    std::cout << (result ? "true" : "false") << std::endl;

    return 0;
}
