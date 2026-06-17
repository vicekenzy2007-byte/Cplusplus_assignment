#include <iostream>
#include <string>
using namespace std;

int main() {
    string binaryString;
    cout << "Enter a binary number: ";
    cin >> binaryString;

    int num = stoi(binaryString, nullptr, 2);

    cout << "Decimal: " << dec << num << endl;
    cout << "Hexadecimal: " << hex << uppercase << num << endl;
    cout << "Octadecimal (Octal): " << oct << num << endl;

    return 0;
}