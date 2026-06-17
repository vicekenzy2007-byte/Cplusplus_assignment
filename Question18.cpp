#include <iostream>
#include <string>
using namespace std;

int main() {
    string binaryString;
    cout << "Enter a binary number: ";
    cin >> binaryString;

    // Convert string base-2 to integer
    int decimal = stoi(binaryString, nullptr, 2);
    cout << "Decimal equivalent: " << decimal << endl;
    
    return 0;
}