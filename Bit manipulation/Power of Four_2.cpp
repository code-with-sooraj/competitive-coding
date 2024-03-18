#include <iostream>

bool isPowerOfFour(int num) {
    if (num <= 0)
        return false;
    
    // Check if it's a power of two
    if ((num & (num - 1)) == 0) {
        // Count the trailing zeros
        int countZeros = 0;
        while (num > 1) {
            num >>= 1;
            countZeros++;
        }
        // If the count is odd, it's a power of four
        return (countZeros % 2 == 0);
    }
    return false;
}

int main() {
    std::cout << std::boolalpha; // to output 'true' or 'false' instead of '1' or '0'

    std::cout << isPowerOfFour(16) << std::endl; // true (16 is 2^4)
    std::cout << isPowerOfFour(64) << std::endl; // true (64 is 2^6)
    std::cout << isPowerOfFour(5) << std::endl;  // false
    std::cout << isPowerOfFour(0) << std::endl;  // false

    return 0;
}
