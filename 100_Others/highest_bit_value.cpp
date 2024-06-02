#include <iostream>

// Function to find the highest bit value set in a 64-bit integer
unsigned long long highest_bit_value(unsigned long long x) {
    if (x == 0) return 0; // Special case for zero: no bits are set

    // Number of leading zeros
    int leading_zeros = __builtin_clzll(x);
    
    // Position of the highest bit set
    int highest_bit_pos = 63 - leading_zeros; // to find out 64 bit, need to substract 63 because 0-indexed
    
    // Value of the highest bit set
    unsigned long long highest_bit_value = 1ULL << highest_bit_pos; // 2 ^ (highest_bit_pos)
    
    return highest_bit_value;
}

int main() {
    // Find the highest bit in 64 bit integer:
    // For 64: Highest bit position is 63 - __builtin_clzll(x)
    // And highest bit value will be just 2 ^ (63 - __builtin_clzll(x))

    unsigned long long x = 45; // Example number

    unsigned long long highest_bit = highest_bit_value(x);
    if (highest_bit != 0) {
        std::cout << "The highest bit set in " << x << " is: " << highest_bit << std::endl;
    } else {
        std::cout << "The number " << x << " has no bits set." << std::endl;
    }

    return 0;
}