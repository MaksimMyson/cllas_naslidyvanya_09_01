#include "BitString.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Test String class
    string inputStr1, inputStr2;
    cout << "Enter String 1: ";
    getline(cin, inputStr1);

    cout << "Enter String 2: ";
    getline(cin, inputStr2);

    String str1(inputStr1.c_str());
    String str2(inputStr2.c_str());
    String str3 = str1 + str2;

    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;
    cout << "Concatenated String: " << str3 << endl;

    // Test BitString class
    string inputBitStr1, inputBitStr2;
    cout << "\nEnter BitString 1: ";
    getline(cin, inputBitStr1);

    cout << "Enter BitString 2: ";
    getline(cin, inputBitStr2);

    BitString bitStr1(inputBitStr1.c_str());
    BitString bitStr2(inputBitStr2.c_str());
    BitString bitStr3 = bitStr1 + bitStr2;

    cout << "BitString 1: " << bitStr1 << endl;
    cout << "BitString 2: " << bitStr2 << endl;
    cout << "Concatenated BitString: " << bitStr3 << endl;

    return 0;
}