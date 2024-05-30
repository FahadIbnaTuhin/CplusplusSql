#include <bits/stdc++.h>

using namespace std;

int main() {
    // Bitwise Operator: As name suggests - it does bitwise manipulation
    // Bitwise Operators are: 
    // & : AND, | : OR, ~ : NOT, << : Left shift, >> : Right shift, ^ : XOR

    // Bitwise & : 
    // It takes two bits at a time and perform AND operation.
    // And(&) is binary operator. It takes two numbers and perform bitwise AND
    // Result of AND is 1 when both bits are 1
    // 7 -> 0 1 1 1
    // 4 -> 0 1 0 0
    // 7&4->0 1 0 0 which is equivalent of 4
    // so 7 & 4 = 4


    // Bitwise OR Operator
    // It takes two bits at a time and perform OR operator
    // OR(|) is binary operator. It takes two numbers and perform bitwise OR
    // Result of OR is 0 when both bits are 0
    // 7 -> 0 1 1 1
    // 4 -> 0 1 0 0
    // 7|4->0 1 1 1 which is equivalent of 7
    // so 7 & 4 = 7


    // Bitwise NOT Operator: 
    // NOT is a unary operator
    // It's job is to complement each bit one by one. [Complement means 0 to 1 or 1 to 0]
    // Result of NOT is 0 when bit is 1 and 1 when bit is 0
    // 7 -> 0 1 1 1
    // ~7-> 1 0 0 0 which is equivalent of 8
    // So, ~ 7 = 8


    // Difference between bitwise AND Logical Operators
    char x = 1, y = 2; // x = 1(0000 0001), y = 2(0000 0010)
    if (x & y) {                        // 1 & 2 = 0(0000 0000)
        printf("Result of x&y is 1");
    }
    // x & y = 0, so won't execute

    if (x && y) {                       // 1 && 2 = TRUE && TRUE = TRUE = 1
        printf("Result of x&&y is 1");
    }

    // 1 << x is equivalent to 2 ^ x
    // a << x is equivalent to a * (2^x)

    // a >> x is quivalent to floor(a / (2^x))


    return 0;
}