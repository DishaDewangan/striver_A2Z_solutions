#include <iostream>
#include <climits>

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int ld = x % 10;
            x = x / 10;
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
                return 0;
            }
            rev = rev * 10 + ld;
        }
        return rev;
    }
};

int main() {
    Solution sol;

    int x;
    std::cout << "Enter an integer to reverse: ";
    std::cin >> x;

    int result = sol.reverse(x);
    
    std::cout << "Reversed integer: " << result << std::endl;

    return 0;
}
