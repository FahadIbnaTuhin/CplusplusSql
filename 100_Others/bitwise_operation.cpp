#include <bits/stdc++.h>

using namespace std;

int main() {
    // n mod 2^x = n & (2^x - 1)


    // using bitwise "&", you can find out any particular bit of a number
    // Suppose, to find out k-th bit of a number x will be: (x >> k) & 1

    // int a = 0b00101001;  // Binary representation of the number
    // // after a >> 3, 00000101 
    // int b = (a >> 3) & 1;  // Shift 'a' 3 positions to the right and perform a bitwise AND with 1
    // cout << b << '\n';  // Output the result


    // if x & y value is same only then you will get 0, otherwise 1 if both digits are either 0 or 1

    // a + b = (a ^ b) + 2(a & b)

    // 2^x > (2^(x-1) + 2^(x-2) + ..... + 2^0) = 2^x > (2^x - 1)

    // When you are using greedy to take the largest number possible: taking the higher bit is always going to be
    // worth it than taking any of the lower bit. Higher bit always have more influence than any other lower bit



    return 0;
}