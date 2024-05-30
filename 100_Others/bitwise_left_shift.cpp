#include <iostream>
using namespace std;

// Function to demonstrate general multiplication by powers of 2 using bitwise left shift
void multiplyByPowerOf2() {
    int x = 3; // Binary: 0011
    int n = 2;
    int result = x << n; // Equivalent to 3 * 2^2 = 3 * 4 = 12
    cout << x << " << " << n << " = " << result << endl;
}

// Function to demonstrate efficient arithmetic operations using bitwise left shift
void efficientMultiplication() {
    int x = 7;
    int result = x << 1; // Equivalent to 7 * 2 = 14
    cout << x << " << 1 = " << result << endl;
}

// Function to demonstrate setting specific bits using bitwise operations
void setSpecificBit() {
    int mask = 1 << 3; // Binary: 00001000 (sets the 4th bit)
    int value = 5;     // Binary: 00000101
    int result = value | mask; // Set the 4th bit: 00001101 (13 in decimal)
    cout << "Setting 4th bit: " << result << endl;
}

// Function to demonstrate data packing using bitwise operations
void dataPacking() {
    int high = 5; // Binary: 00000101
    int low = 3;  // Binary: 00000011

    // Packing high and low into a single byte
    int packed = (high << 4) | low; // 01010011
    cout << "Packed value: " << packed << endl;

    // Unpacking
    int unpacked_high = (packed >> 4) & 0xF; // 00000101
    int unpacked_low = packed & 0xF;         // 00000011

    cout << "Unpacked high: " << unpacked_high << endl;
    cout << "Unpacked low: " << unpacked_low << endl;
}

// Function to demonstrate circular left shift
unsigned int circularLeftShift(unsigned int value, int shift) {
    return (value << shift) | (value >> (32 - shift));
}

void circularShiftExample() {
    unsigned int value = 0x12345678;
    int shift = 4;
    unsigned int result = circularLeftShift(value, shift);
    cout << hex << "Original: 0x" << value << ", After circular left shift by " << dec << shift << " positions: 0x" << result << endl;
}

int main() {
    cout << "Multiplication by powers of 2 using bitwise left shift:" << endl;
    multiplyByPowerOf2();
    
    cout << "\nEfficient arithmetic operations using bitwise left shift:" << endl;
    efficientMultiplication();
    
    cout << "\nSetting specific bits using bitwise operations:" << endl;
    setSpecificBit();
    
    cout << "\nData packing and unpacking using bitwise operations:" << endl;
    dataPacking();
    
    cout << "\nCircular left shift using bitwise operations:" << endl;
    circularShiftExample();
    
    return 0;
}
